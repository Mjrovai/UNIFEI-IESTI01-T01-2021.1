# UNIFEI-IESTI01-T01-2021.1
## Course Repository - TinyML - Machine Learning for Embedding Devices

<img src='IESTI_2.jpg'/>
<figcaption><a href='https://unifei.edu.br/iesti/'>Instituto de Engenharia de Sistemas e Tecnologias da Informação – IESTI - Campus de Itajubá</a></figcaption>
<hr>

`
NOTA: O curso será ministrado majoritariamente em português, mas uma base de ingles será fundamental para o acompanhamento do mesmo, pois todo o material de leitura, vídeos e slides, serão disponibilizados no idioma inglês.`

## Visão geral do curso

TinyML é um curso introdutório na interseção entre o Aprendizado de Máquina (Machine Learning) e dispositivos embarcados (Embedded Devices). A difusão de dispositivos embarcados com ultra-baixo consumo de energia (da ordem de miliwatts), juntamente com a introdução de frameworks de aprendizado de máquina dedicados a dispositivos embarcados, como TensorFlow Lite para Microcontroladores (TF MIcro), permitirá a proliferação em massa de dispositivos IoT potencializados por IA (“AioT”). 

O crescimento explosivo do aprendizado de máquina e a facilidade de uso de plataformas como TensorFlow (TF) o tornam um tópico de estudo indispensável para estudantes de Engenharia Eletrônica, da Computação e Controle & Automação. 

O TinyML difere do aprendizado de máquina convencional (por exemplo, servidor - nuvem) porque requer não apenas conhecimentos em software, mas também conhecimentos em hardware integrado. Este curso procura fornecer uma base para o entendimento deste campo emergente.

A atual versão deste curso, pioneiro na América Latina, tem como principais referências:
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
+ Conhecimentos do idioma inglês (leitura).
+ Conhecimentos básicos de programação em  C / C ++ (Arduino IDE) e Python. Todas as tarefas de classe envolverão uma ou ambos linguages de programação.
+ Familiaridade com ferramentas de linha de comando em Mac, Windows ou Linux. Os projetos exigirão operações em um terminal.
+ Noções de Algebra linear, probabilidade básica e estatística. Muitos tópicos de ML giram em torno de compreender operações e notação de vetores e matrizes, bem como conceitos de distribuições gaussianas, médias, desvios-padrão etc.

## Metodologia/Recursos: 
+ As aulas serão ministradas de maneira remota e ao vivo pela plataforma Google Meet, todas as quartas-feiras das 16:30h às 18:30h. As gravações das aulas estarão disponíveis aos alunos. 
+ Exercícios e projetos poderão ser desenvolvidos em computadores pessoais com TensorFlow V.2x instalados ou utilizando-se ferramentas on-line como [Google CoLab](https://colab.research.google.com/notebooks/intro.ipynb).
+ Modelos reais de TinyML serão desenvolvidos e treinados utilizando-se do [Edge Impulse Studio](https://www.edgeimpulse.com/).
+ Para a captura de dados e deployment dos modelos treinados serão utilizados ao menos smart-phones dotados de sensores do tipo: acelerometro, microfone e camera
+ Opcionalmente serão também utilizados MCUs como Arduino BLE Sense (Cortex-M4) e Raspberry Pi-Pico (RP2040). 

## Professor do curso:
+ [Marcelo José Rovai](https://medium.com/@rovai)

## Supervisão e apoio:
+ [Maurilio Pereira Coutinho](http://lattes.cnpq.br/8563634195134747)
+ [José Alberto Ferreira](http://lattes.cnpq.br/8319509175327154)

## Planejamento das Classes (Turma 1 - 2021.1)
<img src='Class_Schedule_2021.1.png'/>

## Planejamento das Tarefas/Trabalhos (Turma 1 - 2021.1)
<img src='assignments.png'/>

## Material (All in English)
`All material will be uploaded to this repo at the classes' base.`

### Optional readings pre-course:
+ Pre-course: Suggested readings : [[Papers/articles]](docs/pre-course/)

### Parte 1: Fundamentals 
+ Aula 1 - About the Course and Syllabus
+ Aula 2 - Introduction to TinyML  [[Slides]](slides/TinyML_Intro.pdf)
+ Aula 3 - Installing Jupyter Notebook & using of Google CoLab [[Docs]](docs/Tips_for_using_Colab.pdf)
+ Aula 4 - Python and Machine Learning Review  [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf) [[Notebooks]](notebooks/xxx) 
+ Aula 5 - Deep Learning 1a: A Single Neuron; Deep Neural Networks (DNN) [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf) [[Notebooks]](notebooks/xxx) 
+ Aula 6 - Deep Learning 1b: Stochastic Gradient Descent [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf) [[Notebooks]](notebooks/xxx) 
+ Aula 7 - Deep Learning 2a: Overfitting and Underfitting; Dropout and Batch Normalization [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf) [[Notebooks]](notebooks/xxx) 
+ Aula 8 - Deep Learning 2b: Binary Classification [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf) [[Notebooks]](notebooks/xxx) 
+ Aula 9 - Deep Learning 3a: Computer Vision Overview [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf) [[Notebooks]](notebooks/xxx) 
+ Aula 10 - Deep Learning 3b: Convolutional Neural Networks  and Transfer Learning [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf) [[Notebooks]](notebooks/xxx) 

### Parte 2: Applications
+ Aula 11 - AI Lifecycle and ML Workflow [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 12 - AI Lifecycle and ML Workflow 
+ Aula 13 - Machine Learning on Mobile and Edge IoT Devices [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 14 - Machine Learning on Mobile and Edge IoT Devices
+ Aula 15 - Keyword Spotting [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 16 - Lab KWS [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 17 - Visual Wake Words [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 18 - Lab VWW [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 19 - Anomaly Detection [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 20 - Lab Gesture Classification and Anomaly Detection [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)

### Parte 3: Deploying
+ Aula 21 - Deploying TinyML Applications on Embedded Devices [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 22 - Demo/Lab
+ Aula 23 - Collecting a Custom TinyML Dataset [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 24 - Demo/Lab
+ Aula 25 - Pre and Post Processing for Keyword Spotting, Visual Wake Words, and Gesture Recognition [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 26 - Demo/Lab
+ Aula 27 - Profiling and Optimization of TinyML Applications [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)
+ Aula 28 - Responsible AI [[Slides]](slides/x.pdf) [[Docs]](docs/doc.pdf)

### Conclusion
+ Aula 29 - Group Presentations 
+ Aula 30 - Group Presentations 
