/* Edge Impulse Arduino examples
 * Copyright (c) 2021 EdgeImpulse Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 * Thanks to Jeremi Ellis (Twitter @rocksetta)
 * https://github.com/hpssjellis/my-examples-of-edge-impulse/blob/main/OV7670-Camera/nanoCamOV7670.ino
 * 
 */

/* Includes ---------------------------------------------------------------- */

#include <IESTI01_-_Project_Masck_No_Mask_inferencing.h>
#include <TinyMLShield.h> // Includes the Arduino_OV767X.h library


/* Image Definitions  */ 

// raw frame buffer from the camera (QCIF grayscale from camera = 176 * 144 * 1)
#define FRAME_BUFFER_COLS           176
#define FRAME_BUFFER_ROWS           144
uint16_t frame_buffer[FRAME_BUFFER_COLS * FRAME_BUFFER_ROWS] = { 0 };

// Resize image cutting out the edges (it is not a true resize)
#define CUTOUT_COLS                 EI_CLASSIFIER_INPUT_WIDTH
#define CUTOUT_ROWS                 EI_CLASSIFIER_INPUT_HEIGHT
const int cutout_row_start = (FRAME_BUFFER_ROWS - CUTOUT_ROWS) / 2;
const int cutout_col_start = (FRAME_BUFFER_COLS - CUTOUT_COLS) / 2;

/*
 *  Functions to help convert color data
 */

// helper methods to convert from rgb -> 565 and vice versa this one not used
uint16_t rgb_to_565(uint8_t r, uint8_t g, uint8_t b) {
    return ((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3);
}

// funciton converts from RGB565b to RGB888 and is used.
void r565_to_rgb(uint16_t color, uint8_t *r, uint8_t *g, uint8_t *b) {
    *r = (color & 0xF800) >> 8;
    *g = (color & 0x07E0) >> 3;
    *b = (color & 0x1F) << 3;
}

/**
 * This function is called by the classifier to get data
 * We don't want to have a separate copy of the cutout here, so we'll read from the frame buffer dynamically
 */
 
int cutout_get_data(size_t offset, size_t length, float *out_ptr) {
    // offset and length naturally operate on the *cutout*, 
    // so we need to cut it out from the real framebuffer
    size_t bytes_left = length;
    size_t out_ptr_ix = 0;
    
    // read byte for byte
    while (bytes_left != 0) {
        // find location of the byte in the cutout
        size_t cutout_row = floor(offset / CUTOUT_COLS);
        size_t cutout_col = offset - (cutout_row * CUTOUT_COLS);

        // then read the value from the real frame buffer
        size_t frame_buffer_row = cutout_row + cutout_row_start;
        size_t frame_buffer_col = cutout_col + cutout_col_start;

        // grab the value and convert to r/g/b
        uint16_t pixelTemp = frame_buffer[(frame_buffer_row * FRAME_BUFFER_COLS) + frame_buffer_col];

        // This line needed to switch big and little endians
        uint16_t pixel = (pixelTemp>>8) | (pixelTemp<<8);

        uint8_t r, g, b;
        r565_to_rgb(pixel, &r, &g, &b);

        // then convert to out_ptr format
        float pixel_f = (r << 16) + (g << 8) + b;
        //float pixel_f = (r << 16) | (g << 8) | b;
        out_ptr[out_ptr_ix] = pixel_f;

        // and go to the next pixel
        out_ptr_ix++;
        offset++;
        bytes_left--;
    }
    return 0;
}

/**
 * @brief      Arduino setup function
 */
 
void setup()
{
    Serial.begin(115200);
    while (!Serial);

    ei_printf("IESTI01 - Edge Impulse - Image Inferencing");
    // summary of inferencing settings (from model_metadata.h)
    ei_printf("Inferencing settings:\n");
    ei_printf("\tNN_INPUT_FRAME_SIZE: %d\n", EI_CLASSIFIER_NN_INPUT_FRAME_SIZE);
    ei_printf("\tINPUT_WIDTH_COLS: %d\n", EI_CLASSIFIER_INPUT_WIDTH);
    ei_printf("\tINPUT_HEIGHT_ROWS: %d\n", EI_CLASSIFIER_INPUT_HEIGHT);
    ei_printf("\tDSP_INPUT_FRAME_SIZE: %d\n", EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE);
    ei_printf("\tTFLITE_ARENA_SIZE: %d\n", EI_CLASSIFIER_TFLITE_ARENA_SIZE);
    ei_printf("\tInterval: %.2f ms.\n", (float)EI_CLASSIFIER_INTERVAL_MS);
    ei_printf("\tFrame size: %d\n", EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE);
    ei_printf("\tSample length: %d ms.\n", EI_CLASSIFIER_RAW_SAMPLE_COUNT / 16);
    ei_printf("\tNo. of classes: %d\n", sizeof(ei_classifier_inferencing_categories) /
                                            sizeof(ei_classifier_inferencing_categories[0]));
        
    // Initialize TinyML Kit
    initializeShield();
/*
    VGA – 640 x 480
    CIF – 352 x 240
    QVGA – 320 x 240
    QCIF – 176 x 144
*/
    // Initialize the OV7675 camera
    if (!Camera.begin(QCIF, RGB565, 1, OV7675)) {
      Serial.println("Failed to initialize camera");
      while (1);
    }
}

/**
 * @brief      Arduino main function
 */
void loop()
{

    ei_printf("Edge Impulse standalone inferencing (Arduino)\n");

    ei_impulse_result_t result = { 0 };

    // Get image from Camera 
    Camera.readFrame((uint8_t*)frame_buffer);

    // Set up pointer to look after data, crop it and convert it to RGB888
    signal_t signal;
    signal.total_length = CUTOUT_COLS * CUTOUT_ROWS;
    signal.get_data = &cutout_get_data; 

    // invoke the impulse
    EI_IMPULSE_ERROR res = run_classifier(&signal, &result, false /* debug */);
    ei_printf("run_classifier returned: %d\n", res);

    if (res != 0) return;

    // print the predictions
    ei_printf("Predictions ");
    ei_printf("(DSP: %d ms., Classification: %d ms., Anomaly: %d ms.)",
        result.timing.dsp, result.timing.classification, result.timing.anomaly);
    ei_printf(": \n");
    ei_printf("[");
    for (size_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
        ei_printf("%.5f", result.classification[ix].value);

#if EI_CLASSIFIER_HAS_ANOMALY == 1
        ei_printf(", ");
#else
        if (ix != EI_CLASSIFIER_LABEL_COUNT - 1) {
            ei_printf(", ");
        }
#endif
    }
#if EI_CLASSIFIER_HAS_ANOMALY == 1
    ei_printf("%.3f", result.anomaly);
#endif
    ei_printf("]\n");

    // human-readable predictions
    for (size_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
        ei_printf("    %s: %.5f\n", result.classification[ix].label, result.classification[ix].value);
    }
#if EI_CLASSIFIER_HAS_ANOMALY == 1
    ei_printf("    anomaly score: %.3f\n", result.anomaly);
#endif

 /*
 * The code portion bolow is used to show what image the camera is seem.
 * Use the pgm : IEST01_OV7675_Image_Viewer
 * (for test only)
 */ 
      Serial.println();
      for (size_t ix = 0; ix < signal.total_length; ix++) {
          float value[1];
          signal.get_data(ix, 1, value);
          ei_printf("0x%06x", (int)value[0]);
          if (ix != signal.total_length - 1) {
              ei_printf(", ");
          }
      }
         
    Serial.println();
    delay(1000);
}

/**
 * @brief      Printf function uses vsnprintf and output using Arduino Serial
 *
 * @param[in]  format     Variable argument list
 */
void ei_printf(const char *format, ...) {
    static char print_buf[1024] = { 0 };

    va_list args;
    va_start(args, format);
    int r = vsnprintf(print_buf, sizeof(print_buf), format, args);
    va_end(args);

    if (r > 0) {
        Serial.write(print_buf);
    }
}
