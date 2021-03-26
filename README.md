# UNIFEI-IESTI01-T01-2021.1
## Course Repository - TinyML - Machine Learning for Embedding Devices

<img src='IESTI_1.jpg'/>

## Visão geral do curso

Tiny Machine Learning (TinyML) é um curso introdutório na interseção entre o Aprendizado de Máquina (Machine Learning) e dispositivos embarcados (Embedded Devices). A difusão de dispositivos embarcadoscom ultra-baixo consumo de energia (da ordem de miliwatts), juntamente com a introdução de frameworks de aprendizado de máquina dedicados a dispositivos embarcados, como TensorFlow Lite para Microcontroladores (TF MIcro), permitirá a proliferação em massa de dispositivos IoT potencializados por IA (“AioT”). 

O crescimento explosivo do aprendizado de máquina e a facilidade de uso de plataformas como TensorFlow (TF) o tornam um tópico de estudo indispensável para estudantes de Engenharia Eletrônica, da Computação e Controle & Automação. 

O TinyML difere do aprendizado de máquina convencional (por exemplo, servidor - nuvem) porque requer não apenas conhecimento em software, mas também conhecimento em hardware integrado. Este curso procura fornecer uma base para o entendimento desse importnate campo emergente.

A atual versão deste curso tem como principais referencias:
+ [Harvard School of Engineering and Applied Sciences - CS249r: Tiny Machine Learning](https://sites.google.com/g.harvard.edu/tinyml/home)
+ [Professional Certificate in Tiny Machine Learning (TinyML) – edX/Harvard](https://www.edx.org/professional-certificate/harvardx-tiny-machine-learning)
+ [Introduction to Embedded Machine Learning (Coursera)](https://www.coursera.org/learn/introduction-to-embedded-machine-learning)

## Tópicos do curso

+	Fundamentos de IoT
+	Fundamentos de aprendizado de máquina (ML)
+	Fundamentos de Deep Learning (DL)
+	Como coletar dados para ML
+	Como treinar e implantar modelos de ML
+	Noções básicas sobre ML embarcado
+	O código por trás de alguns dos aplicativos mais amplamente utilizados no TinyML
+	Casos reais de aplicação do TinyML na indústria
+	Princípios de reconhecimento automático de fala (KeyWord Spotting como Alexa, Hey Google, Siri, etc.)
+	Princípios do reconhecimento automático de imagens (Visual Wake Words)
+	Conceito de detecção de anomalias e modelos de ML aplicáveis 
+	Princípios de Engenharia de Dados aplicado ao TinyML
+	Visão geral do hardware de dispositivos baseados em microcontroladores
+	Visão geral do software por trás de dispositivos baseados em microcontroladores
+	Projetos reais utilizando plataformas de mercado
+	Design, Desenvolvimento e Implantação de uma IA responsável

## Carga horária: 
+	30hs (Classes de 2hs, durante 15 semanas) 
+	15hs de tarefas/labs
+	15hs em pesquisas e estudos individuais + trabalho final (em grupo)

## Processo de aprovação:
+	Listas de Exercicios (Jupyter Notebook): 40%
+	Projetos práticos (Labs): 30%
+	Projeto Final (com apresentação): 30%

## Pré-requisitos
+ Conhecimentos básicos de programação em  C / C ++ (Arduino IDE) e Python. Todas as tarefas de classe envolverão uma ou ambos linguages de programação.
+ Familiaridade com ferramentas de linha de comando em Mac, Windows ou Linux. Os projetos exigirão operações em um terminal.
+ Noções de Algebra linear, probabilidade básica e estatística. Muitos tópicos de ML giram em torno de compreender operações e notação de vetores e matrizes, bem como conceitos de distribuições gaussianas, médias, desvios-padrão etc.

## Metodologia/Recursos: 
+ As aulas serão ministradas de maneira remota pela plataforma Google Meet.
+ Exercícios e projetos poderão ser desenvolvidos em computadores pessoais com TensorFlow V.2x instalados ou utilizando-se ferramentas on-line como [Google CoLab](https://colab.research.google.com/notebooks/intro.ipynb).
+ Modelos reais de TinyML serão desenvolvidos e treinados utilizando-se do [Edge Impulse Studio](https://www.edgeimpulse.com/).
+ Para a captura de dados e deployment dos modelos treinados serão utilizados ao menos smart-phones dotados de sensores do tipo: acelerometro, microfone e camera
+ Opcionalmente serão também utilizados MCUs como Arduino BLE Sense (Cortex-M4) e Raspberry Pi-Pico (RP2040). 

## Equipe de professores do grupo de TinyML:
+ [Maurilio Pereira Coutinho]()
+ [José Alberto Ferreira]()
+ [Marcelo José Rovai]()

## Preliminar Class Schedule
<img src='Preliminar_Class_Schedule.png'/>

# Material

## Chapter 1: Welcome to TinyML
The goal of this chapter is to introduce the students to the core concepts, challenges, and opportunites of TinyML. It will also give an overview of the entire specialization; how the courses are structured and what to expect as a student steping through the curriculum.

### Chapter 1.1: Course Overview
1. What is this specialization all about? [[Slides]](slides/1-1-1.pdf)
2. Who is this course aimed at (everyone)? [[Slides]](slides/1-1-2.pdf) 
3. Forum: Introduce yourself to the class
4. What will you learn? [[Slides]](slides/1-1-4.pdf)
5. How is the course structured? [[Slides]](slides/1-1-5.pdf)
6. Student background quiz

### Chapter 1.2: The Future of ML is Tiny and Bright
1. What is (tiny) Machine Learning? [[Slides]](slides/1-2-1.pdf)
2. TinyML application case studies. [[Doc]](readings/1-2-2.pdf)
3. Forum: What TinyML applications are you excited about?
4. How do we enable TinyML? [[Slides]](slides/1-2-4.pdf)
5. Formative quiz.

### Chapter 1.3: TinyML Challenges
1. What are the Challenges for TinyML (Part A)? [[Slides]](slides/1-3-1.pdf)
2. What are the Challenges for TinyML (Part B)? [[Slides]](slides/1-3-2.pdf)
3. Formative quiz.
4. What are the Challenges for TinyML (Part C)? [[Slides]](slides/1-3-4.pdf)
5. What are the challenges for TinyML (Part D)? [[Slides]](slides/1-3-5.pdf)
6. Why the Future of ML is Tiny. [[Doc]](readings/1-3-6.pdf)
7. Introduction to Responsible AI/ML. [[Slides]](slides/1-3-7.pdf)
8. Forum: Case Studies of Responsible AI/ML Failures. [[Doc]](other/1-3-8.pdf)
9. Formative Quiz
10. Summative Test

### Chapter 1.4: Getting Started
1. What resources are needed for this courese? [[Slides]](slides/1-4-1.pdf)
2. Introduction to Google Colab [[Video Link](https://www.youtube.com/watch?v=inN8seMm7UI)
3. Colab in this Course [[Slides]](slides/1-4-3.pdf)
4. Learning Colab [[Colab link]](https://colab.research.google.com/notebooks/intro.ipynb)
5. Tips for using Colab [[Doc]](readings/1-4-5.pdf)
6. Introduction to TensorFlow [[Video Link]](https://www.youtube.com/watch?v=yjprpOoH5c8)
7. TensorFlow in this course
8. Sample TensorFlow code. [[Doc]](readings/1-4-8.pdf)
9. Summative Test

## Chapter 2: Introduction to (Tiny) ML
The goal of this section of the course is to introduce students to “ML language” that we will be using throughout the TinyML course. More specifically, this course focuses on the basics of machine learning and embedded systems. Some of you might have a deep machine learning background. In this case, parts of this section will be more of a review for you. We encourage you to still go through things, take the tests, and get excited for the next course which will dive deeper into TinyML, covering frameworks and applications that you may be less familiar with.

### Chapter 2.1: The Machine Learning Paradigm
1. The machine learning paradigm [[Slides]](slides/2-1-1.pdf)
2. Finding Patterns
3. Thinking about Loss [[Slides]](slides/2-1-3.pdf)
4. Exploring Loss [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-1-4-ExploringLoss.ipynb)
5. Minimizing Loss [[Slides]](slides/2-1-5.pdf)
6. Exploring Gradient Descent [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-1-6-MimimizingLoss.ipynb)
7. Formative Quiz
8. First Neural Network [[Slides]](slides/2-1-8.pdf)
9. First Neural Network in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-1-9-FirstNeuralNetwork.ipynb)
10. More on Neural Networks [[Doc]](readings/2-1-10.pdf)
11. Machine Learning Case Studies [[Doc]](readings/2-1-11.pdf)
12. Formative Quiz
13. Neural Network Coding Assignment [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-1-13-AssignmentQuestion.ipynb)
14. Assignment Solution [[Doc]](other/2-1-14.pdf)
15. Summative Test

### Chapter 2.2: The Building Blocks of Deep Learning
1. Initialization in Machine Learning [[Doc]](readings/2-2-1.pdf)
2. Understanding Neurons [[Slides]](slides/2-2-2.pdf)
3. Coding ExerciseL Neurons in Action [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-2-3-MimimizingLoss.ipynb)
4. Coding Stepback [[Doc]](readings/2-2-4.pdf)
5. Coding Exercise: Multi-Layer Neural Network [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-2-5-FirstNeuralNetworkRevisited.ipynb)
6. Introduction to Classification [[Slides]](slides/2-2-6.pdf)
7. Coding Exercise: DNN [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-2-7-ExploringCategorical.ipynb)
8. Formative Quiz
9. Training, Validation, and Test Data [[Slides]](slides/2-2-9.pdf)
10. Formative Quiz
11. Realities of Coding Neural Networks [[Doc]](readings/2-2-11.pdf)
12. Coding Assignment: DNNs [Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-2-12-AssignmentQuestion.ipynb)
13. Assignment Solution [[Doc]](other/2-2-13.pdf)
14. Summative Test

### Chapter 2.3: Exploring Machine Learning Scenarios
1. Quick Recap [[Doc]](readings/2-3-1.pdf)
2. Introducing Convolutions [[Slides]](slides/2-3-2.pdf)
3. Coding Exercise: Filters [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-3-3-ExploringConvolutions.ipynb)
4. From DNN to CNN [[Slides]](slides/2-3-4.pdf)
5. Coding exercise: CNN [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-3-5-FashionMNISTConvolutions.ipynb)
6. Mapping Features to Labels [[Doc]](readings/2-3-6.pdf)
7. Coding Exercise: Computer Vision [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-3-7-FashionMNISTConvolutionsVisualizations.ipynb)
8. Formative Quiz
9. Coding Assignment: CNNs [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-3-9-AssignmentQuestion.ipynb)
10. Assignment Solution [[Doc]](other/2-3-10.pdf)
11. Summative Test

### Chapter 2.4: Building a Computer Vision Model
1. Quick Recap [[Doc]](readings/2-4-1.pdf)
2. Preparing Image Data [[Slides]](slides/2-4-2.pdf)
3. Coding Exercise: Complex Images [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-4-3-HorsesOrHumans.ipynb)
4. TFDS for Image Data [[Doc]](readings/2-4-4.pdf)
5. Overfitting [[Slides]](slides/2-4-5.pdf)
6. Coding exercise: Image Augmentation [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-4-6-HorseOrHumanWithAugmentation.ipynb)
7. Formative Quiz
8. Dropout Regularization [[Doc]](readings/2-4-8.pdf)
9. Exploring Loss Functions and Optimizers [[Doc]](readings/2-4-9.pdf)
10. Formative Quiz
11. Coding Assignment: Enhancing a CNN [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/2-4-11-AssignmentQuestion.ipynb)
12. Assignment Solution [[Doc]](other/2-4-12.pdf)
13. Summative Test

### Chapter 2.5: Responsible AI Design
1. What Am I Building? What’s the Goal? [[Slides]](slides/2-5-1.pdf)
2. Forum: Development and TinyML [[Doc]](other/2-5-2.pdf)
3. Who Am I Building This For? [[Slides]](slides/2-5-3.pdf)
4. What Are the Consequences for the User When It Fails? [[Slides]](slides/2-5-4.pdf)
5. Formative Quiz
6. Forum: Error Types and Ethics [[Doc]](other/2-5-6.pdf)
7. Summative Test

### Chapter 2.6: Course 1 Summary
1. Recapping (Tiny) ML and its Data-Centric Role [[Doc]](readings/2-6-1.pdf)
2. Why We Are Excited About TinyML [[Slides]](slides/2-6-2.pdf)
3. What We Have Learned Thus Far [[Slides]](slides/2-6-3.pdf)
4. Formative Summary Quiz
5. What's Coming Next [[Slides]](slides/2-6-5.pdf)
6. Give us Feedback!

## Chapter 3: Applications of TinyML
The goal of this chapter is to focus on applications, data and neural networks on tiny or deeply embedded devices. We will expose the students to embedded devices and different real-world application scenarios of TinyML. We do this by covering the most widely used applications for TinyML, coupled with some hands-on Colab development.

### Chapter 3.1: Welcome to Applications of TinyML
1. Who's Who in TinyML2?! [[Doc]](readings/3-1-1.pdf)
2. Forum: Welcome New Students
3. Welcome to TinyML Applications [[Slides]](slides/3-1-3.pdf)
4. Building Blocks (from Course 1) [[Slides]](slides/3-1-4.pdf)
5. Formative Quiz
6. What You’ll Learn in This Course [[Slides]](slides/3-1-6.pdf)
7. What Resources are Needed for this Course [[Doc]](readings/3-1-7.pdf)
8. Preview of TinyML Applications [[Slides]](slides/3-1-8.pdf)
9. The Role of Sensors in TinyML Applications [[Doc]](readings/3-1-9.pdf)
10. Student Background Quiz
11. Forum: What Applications Excite You?
12. The Kit for Course 3 [[Doc]](readings/3-1-12.pdf)

### Chapter 3.2: AI Lifecycle and ML Workflow
1. ML Lifecycle Part 1 [[Slides]](slides/3-2-1.pdf)
2. Forum: The Future of TinyML
3. ML Lifecycle Part 2 [[Doc]](readings/3-2-3.pdf)
4. ML Workflow Part 1 [[Slides]](slides/3-2-4.pdf)
5. ML Workflow Part 2 [[Doc]](readings/3-2-5.pdf)
6. Formative Quiz
7. Summative Test

### Chapter 3.3: Machine Learning on Mobile and Edge IoT Devices (Part 1)
1. TensorFlow: Where We Left Off [[Doc]](readings/3-3-1.pdf)
2. Introduction to TensorFlow Lite [[Slides]](slides/3-3-2.pdf)
3. Using the TFLite Converter Screencast
4. Using the TFLite Converter in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-3-4-TFLiteConverter.ipynb)
5. How to use TFLite Models [[Doc]](readings/3-3-5.pdf)
6. How to use TFLite Models Screencast
7. Running Models with TFLite in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-3-7-RunningTFLiteModels.ipynb)
8. Formative Quiz
9. TFLite Optimizations and Quantization [[Slides]](slides/3-3-9.pdf)
10. TFLite Optimizations and Quantization in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-3-10-TFLiteOptimizations.ipynb)
11. Quantization Aware Training [[Slides]](slides/3-3-11.pdf)
12. Quantization Aware Training Colab [[Colab Link]](https://colab.research.google.com/github/tensorflow/model-optimization/blob/master/tensorflow_model_optimization/g3doc/guide/quantization/training_example.ipynb)
13. Formative Quiz
14. Assignment: Quantization in TFLite [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-3-14-Assignment.ipynb)
15. Assignment Solution [[Doc]](other/3-3-15.pdf)
16. Summative Test

### Chapter 3.4: Machine Learning on Mobile and Edge IoT Devices (Part 2)
1. Why are 8-Bits Enough for ML? [[Doc]](readings/3-4-1.pdf)
2. Post Training Quantization (PTQ) [[Slides]](slides/3-4-2.pdf)
3. PTQ Weight Distribution Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-4-3-PTQ.ipynb)
4. Quantization Aware Training (QAT) [[Slides]](slides/3-4-4.pdf)
5. Formative Quiz
6. Inference Engine: TF vs. TFLite [[Slides]](slides/3-4-6.pdf)
7. Conversion and Deployment [[Doc]](readings/3-4-7.pdf)
8. Formative Quiz
9. Summative Test

### Chapter 3.5: Keyword Spotting
1. Introduction to Keyword Spotting (KWS) [[Slides]](slides/3-5-1.pdf)
2. Forum: How (else) would you use KWS?
3. Keyword Spotting Challenges/Constraints [[Slides]](slides/3-5-1.pdf)
4. Formative Quiz
5. Keyword Spotting Application Architecture Overview [[Doc]](readings/3-5-5.pdf)
6. Keyword Spotting Datasets [[Slides]](slides/3-5-6.pdf)
7. Keyword Spotting Dataset Creation [[Doc]](readings/3-5-7.pdf)
8. Keyword Spotting Data Collection / Pre-Processing [[Slides]](slides/3-5-8.pdf)
9. Spectrograms and MFCCs [[Doc]](readings/3-5-9.pdf)
10. Spectrograms and MFCCs in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-5-10-SpectrogramsMFCCs.ipynb)
11. A Keyword Spotting Model [[Slides]](slides/3-5-11.pdf)
12. Formative Quiz
13. Keyword Spotting in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-5-13-PretrainedModel.ipynb)
14. Forum: Pretrained Model Experience
15. Intro to Training in Colab [[Slides]](slides/3-5-15.pdf)
16. Training in Colab [[Doc]](readings/3-5-16.pdf)
17. Monitoring Training in Colab [[Doc]](readings/3-5-17.pdf)
18. Assignment: Training your own Keyword Spotting Model [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-5-18-TrainingKeywordSpotting.ipynb)
19. Assignment Solution [[Doc]](other/3-5-19.pdf)
20. KWS Metrics [[Slides]](slides/3-5-20.pdf)
21. Formative Quiz
22. Streaming Audio [[Slides]](slides/3-5-22.pdf)
23. Cascade Architectures [[Slides]](slides/3-5-23.pdf)
24. Keyword Spotting in the Big Picture [[Doc]](readings/3-5-24.pdf)
25. Formative Quiz
26. Summative Test

### Chapter 3.6: Data Engineering for TinyML Applications
1. Introduction to Data Engineering [[Doc]](readings/3-6-1.pdf)
2. What’s Data Engineering and Why It’s Important [[Slides]](slides/3-6-2.pdf)
3. Forum: What Dataset might you want to collect?
4. Dataset Standards: Speech Commands [[Slides]](slides/3-6-4.pdf)
5. Speech Commands Paper [[Doc]](readings/3-6-5.pdf)
6. Formative Quiz
7. Crowdsourcing Data for the Long Tail [[Slides]](slides/3-6-7.pdf)
8. Giving back to the Open Source Community [[Doc]](other/3-6-8.pdf)
9. Reusing and Adapting Existing Datasets [[Slides]](slides/3-6-9.pdf)
10. Formative Quiz
11. Responsible Data Collection [[Slides]](slides/3-6-11.pdf)
12. Forum: What do you think about open source data collection?
13. Section Summary [[Doc]](readings/3-6-13.pdf)
14. Summative Test

### Chapter 3.7: Visual Wake Words
1. Introduction to Visual Wake Words (VWW) Application [[Doc]](readings/3-7-1.pdf)
2. What are Visual Wake Words (VWW)? [[Slides]](slides/3-7-2.pdf)
3. Forum: What do you think might be the challenges for Visual Wake Words?
4. Visual Wake Words Challenges [[Slides]](slides/3-7-4.pdf)
5. Visual Wake Words Dataset [[Slides]](slides/3-7-5.pdf)
6. Data Privacy with Images [[Doc]](readings/3-7-6.pdf)
7. Formative Quiz
8. Neural Network Architectures for VWW [[Slides]](slides/3-7-8.pdf)
9. The Math Behind MobileNets Efficient Computation [[Doc]](readings/3-7-9.pdf)
10. Transfer Learning for VWW [[Slides]](slides/3-7-10.pdf)
11. Assignment: Transfer Learning in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-7-11-Assignment.ipynb)
12. Assignment Solution [[Doc]](other/3-7-12.pdf)
13. Common Myths and Pitfalls about Transfer Learning [[Doc]](readings/3-7-13.pdf)
14. Formative Quiz
15. Metrics for VWW [[Slides]](slides/3-7-15.pdf)
16. Section Summary [[Doc]](readings/3-7-16.pdf)
17. Summative Test

### Chapter 3.8: Anomaly Detection
1. Introduction to Anomaly Detection [[Doc]](readings/3-8-1.pdf)
2. What Is Anomaly Detection [[Slides]](slides/3-8-2.pdf)
3. Forum: Interesting applications of anomaly detection
4. Anomaly Detection in Industry [[Slides]](slides/3-8-4.pdf)
5. Industry 4.0 and TinyML [[Doc]](readings/3-8-5.pdf)
6. Anomaly Detection Datasets [[Slides]](slides/3-8-6.pdf)
7. MIMII Dataset [[Doc]](readings/3-8-7.pdf)
8. Real vs. Synthetic Data [[Doc]](readings/3-8-8.pdf)
9. Unsupervised Learning for Anomaly Detection (with K-Means in Colab) [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-8-9-K-means.ipynb)
10. Formative Quiz
11. Unsupervised Learning for Anomaly Detection with Autoencoders [[Slides]](slides/3-8-11.pdf)
12. Autoencoder Model Architecture [[Doc]](readings/3-8-12.pdf)
13. Training and Metrics for Autoencoders in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-8-13-Autoencoders.ipynb)
14. Forum: Picking a Threshold
15. Formative Quiz
16. Assignment: Training an Anomaly Detection Model [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-8-16-Assignment.ipynb)
17. Assignment Solution [[Doc]](other/3-8-16.pdf)
17. Section Summary [[Doc]](readings/3-8-17.pdf)
19. Summative Test

### Chapter 3.9: Responsible AI Development
1. Data Collection [[Slides]](slides/3-9-1.pdf)
2. The Many Faces of Bias in ML [[Doc]](readings/3-9-2.pdf)
3. Biased Datasets [[Slides]](slides/3-9-3.pdf)
4. Formative Quiz
5. Forum: Bias [[Doc]](other/3-9-5.pdf)
6. Fairness [[Slides]](slides/3-9-6.pdf)
7. Google's What-If Tool in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/3-10-7-WIT.ipynb)
8. Forum: Fairness [[Doc]](other/3-9-8.pdf)
9. Summative Test

### Chapter 3.10: Chapter Summary
1. Chapter Summary [[Slides]](slides/3-10-1.pdf)
2. Formative Quiz
3. Kit for Course 3 [[Doc]](readings/3-10-3.pdf)
4. Give us feedback!

## Chapter 4: Deploying TinyML
The goal of this chapter is to teach learners how to engineer end-to-end tinyML applications using TensorFlow Micro. We teach learners how to program in TF Micro, and use it to deploy real-world applications. 

### Chapter 4.1: Welcome to Deploying TinyML
1. Welcome to TinyML3 [[Doc]](readings/4-1-1.pdf)
2. Welcome Message from VJ [[Slides]](slides/4-1-2.pdf)
3. Course 1 and 2 Recap [[Doc]](readings/4-1-3.pdf)
4. Quiz: Embedded Systems & ML Background
5. Quiz Feedback
6. TinyML Application Deployment Preview [[Slides]](slides/4-1-6.pdf)
7. The TinyML Kit [[Doc]](readings/4-1-7.pdf)
8. TinyML Course Kit Overview [[Slides]](slides/4-1-8.pdf)
9. Forum: Welcome (Back) Students
10. Student Background Quiz
11. How the Course is Structured [[Slides]](slides/4-1-11.pdf)

### Chapter 4.2: Getting Started
1. Intro to the Lab Sections Screencast
2. C++ for Python Users [[Doc]](readings/4-2-2.pdf)
3. Setting up your Hardware [[Doc]](readings/4-2-3.pdf)
4. Forum: Hardware Setup Questions
5. Setting up your Software [[Doc]](readings/4-2-5.pdf)
6. Forum: Software Setup Questions
7. Formative Quiz
8. The Arduino Blink Example [[Doc]](readings/4-2-8.pdf)
9. Forum: Arduino Blink Questions
10. Testing the TensorFlow Install [[Doc]](readings/4-2-10.pdf)
11. Forum: TensorFlow Install Questions
12. Formative Quiz
13. Testing the Sensors [[Doc]](readings/4-2-13.pdf)
14. Forum: Sensor Tests Questions
15. Formative Quiz
16. Summative Test

### Chapter 4.3: Embedded Hardware and Software
1. Embedded System [[Slides]](slides/4-3-1.pdf)
2. Diversity of Embedded Systems [[Doc]](readings/4-3-2.pdf)
3. Embedded Computing Hardware [[Slides]](slides/4-3-3.pdf)
4. Diversity of Embedded Microcontrollers [[Doc]](readings/4-3-4.pdf)
5. Embedded I/O [[Slides]](slides/4-3-5.pdf)
6. Transducer Modules and Wireless Communication [[Doc]](readings/4-3-6.pdf)
7. Formative Quiz
8. Embedded System Software [[Slides]](slides/4-3-8.pdf)
9. Arduino cores, frameworks, mbedOS, and ‘bare metal’ [[Doc]](readings/4-3-9.pdf)
10. Embedded ML Software [[Slides]](slides/4-3-10.pdf)
11. Formative Quiz
12. Summative Test

### Chapter 4.4: TensorFlow Lite Micro
1. What is TensorFlow Lite for Microcontrollers? [[Doc]](readings/4-4-1.pdf)
2. TFMicro: The Big Picture [[Slides]](slides/4-4-2.pdf)
3. Formative Quiz
4. How to Use TFMicro: HelloWorld Screencast
5. TFLite Micro: Interpreter [[Slides]](slides/4-4-5.pdf)
6. MCU Memory Hierarchy [[Doc]](readings/4-4-6.pdf)
7. TFLite Micro: Model Format / FlatBuffer [[Slides]](slides/4-4-7.pdf)
8. TensorFlow Lite Flatbuffer Manipulation Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/4-4-8-Flatbuffers.ipynb)
9. Formative Quiz
10. TFLite Micro: Memory Allocation (a.k.a Tensor Arena) [[Slides]](slides/4-4-10.pdf)
11. TFLite Micro: NN Operator Support (OpsResolver) [[Slides]](slides/4-4-11.pdf)
12. TFLite Micro Developer Design Principles [[Doc]](readings/4-4-12.pdf)
13. Formative Quiz
14. Summative Test

### Chapter 4.5: Keyword Spotting
#### Part I: Introducing KWS
1. TinyML “Keyword Spotting” Workflow [[Doc]](readings/4-5-1.pdf)
2. KWS Application Architecture [[Slides]](slides/4-5-2.pdf)
3. KWS Initialization [[Slides]](slides/4-5-3.pdf)
4. KWS Initialization Screencast
5. Formative Quiz
6. KWS Pre-processing [[Slides]](slides/4-5-6.pdf)
7. KWS Pre-processing Screencast
8. Formative Quiz
9. KWS Inference [[Slides]](slides/4-5-9.pdf)
10. KWS Inference Screencast
11. Formative Quiz
12. KWS Post-processing [[Slides]](slides/4-5-12.pdf)
13. KWS Post-processing Screencast
14. KWS Summary [[Slides]](slides/4-5-14.pdf)
15. Formative Quiz

#### Part II: KWS Lab
16. Deploying the Pretrained KWS Model
17. Forum: Deploying the Pretrained KWS Model Questions
18. Deploying a KWS Model with Your Favorite Keyword(s)
19. Forum: Deploying a KWS Model with Your Favorite Keyword(s) Questions
20. Formative Quiz
21. Summative Test

### Chapter 4.6: Custom Dataset Engineering for Keyword Spotting
#### Part I: Custom Datasets Principles
1. Recap Dataset Engineering [[Doc]](readings/4-6-1.pdf)
2. Introducing Custom Dataset for KWS [[Slides]](slides/4-6-2.pdf)
3. Things to Consider for Your Data Collection Plan [[Doc]](readings/4-6-3.pdf)
4. Formative Quiz
5. Forum Your Data Collection Plan

#### Part II: Custom Dataset Lab
6. Building a Custom Dataset [[Doc]](readings/4-6-6.pdf)
7. Forum: Building a Custom Dataset Questions
8. Train and Deploy Your Custom Dataset KWS Model [[Doc]](readings/4-6-8.pdf)
9. Forum: Train and Deploy Your Custom Dataset KWS Model Questions
10. Forum: How Well Does Your Custom Dataset Model Work?
11. Summative Test

### Chapter 4.7: Visual Wake Words
#### Part I: Person Detection and MultiTenancy Background
1. Recap: What are Visual Wake Words? [[Doc]](readings/4-7-1.pdf)
2. Person Detection Application Architecture [[Slides]](slides/4-7-2.pdf)
3. Person Detection Screencast
4. Formative Quiz
5. Person Detection with Keyword Spotting: MultiModal [[Slides]](slides/4-7-5.pdf)
6. Person Detection with Keyword Spotting: MultiTenancy [[Slides]](slides/4-7-6.pdf)
7. Formative Quiz
8. MultiTenancy in TensorFlow Lite Micro [[Slides]](slides/4-7-8.pdf)

#### Part II: Person Detection and MultiTenancy Lab
9. Deploying the Pretrained Person Detection Model [[Doc]](readings/4-7-9.pdf)
10. Forum: Deploying the Pretrained Person Detection Model Questions
11. Deploying a Multi-Tenant Application [[Doc]](readings/4-7-11.pdf)
12. Forum: Deploying a Multi-Tenant Application
13. Formative Quiz
14. Summative Test

### Chapter 4.8: Gesturing Magic Wand
#### Part I: Gesture Recognition
1. Recap: Time Series for Anomaly Detection [[Doc]](readings/4-8-1.pdf)
2. TinyML Sensor Ecosystem [[Slides]](slides/4-8-2.pdf)
3. Anatomy of an IMU [[Doc]](readings/4-8-3.pdf)
4. Magic Wand Application [[Slides]](slides/4-8-4.pdf)
5. Magic Wand Application Architecture [[Slides]](slides/4-8-5.pdf)
6. Understanding the Magic Wand Application [[Doc]](readings/4-8-6.pdf)
7. Formative Quiz

#### Part II: Magic Wand Lab
8. Deploying the Magic Wand [[Doc]](readings/4-8-8.pdf)
9. Forum: Deploying the Magic Wand Questions
10. Collecting Data for Your Custom Magic Wand Project [[Doc]](readings/4-8-10.pdf)
11. Forum: Collecting Data for Your Custom Magic Wand Project Questions
12. Training and Deploying Your Custom Magic Wand Project [[Doc]](readings/4-8-12.pdf)
13. Forum: Training and Deploying Your Custom Magic Wand Project Questions
14. Forum: How well does your Custom Magic Wand Model Work?
15. Summative Quiz
16. Formative Test

### Chapter 4.9: Responsible AI Deployment
1. Privacy [[Slides]](slides/4-9-1.pdf)
2. Formative Quiz
3. Forum: Privacy [[Doc]](other/4-9-3.pdf)
4. Security [[Slides]](slides/4-9-4.pdf)
5. Formative Quiz
6. Attacking a KWS Model in Colab [[Colab Link]](https://colab.research.google.com/github/tinyMLx/colabs/blob/master/4-9-6-Attacking-KWSModel.ipynb)
7. Forum: Attacking a KWS Model in Colab Questions
8. Why do ML Models Fail after Deployment? [[Doc]](readings/4-9-8.pdf)
9. Monitoring after Deployment [[Slides]](slides/4-9-9.pdf)
10. Summative Test

### Chapter 4.10: Summary
1. Congratulations! You Made it to the Finish Line! [[Slides]](slides/4-10-1.pdf)
2. What Comes Next: Advanced Topics in TinyML [[Doc]](readings/4-10-2.pdf)
3. What Do I Do Now? [[Slides]](slides/4-10-3.pdf)
4. TinyMLx Project Extension (Optional) [[Doc]](readings/4-10-4.pdf)
5. Outgoing Survey of the Course and Topics

### Chapter 4.11: Appendix
1. [Appendix Link](https://github.com/tinyMLx/appendix)
