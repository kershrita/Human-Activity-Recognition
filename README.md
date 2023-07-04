# Human Activity Recognition

The Human Activity Recognition System repository provides a comprehensive guide, code samples, and instructions to help you build and deploy a system capable of recognizing human activities based on sensor data. It combines data pre-processing, machine learning, Arduino integration, and Jupyter Notebook analysis, making it a valuable resource for anyone interested in developing and implementing human activity recognition applications.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Configuration](#configuration)
- [Documentation](#documentation)
- [Acknowledgments](#acknowledgments)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Installation

This project is a big one, it's divided to three parts:
1. **Data Collection**: How to collect the data.
2. **Data Pre-processing & Model Training**: Cleaning data, model selection and training. 
3. **Model Deployment & Prediction**: Deploy the model on Arduino platform to make a real-time prediction.

Let's start!

### 1. Data Collection

1. Clone or Download the repository to your local machine using the following command:
```
git clone https://github.com/kershrita/Human-Activity-Recognition.git
```
2. Navigate to [Data Collection](Data%20Collection/Data%20Collection.ino) file.
3. Open the file using Arduino IDE.
4. Make sure that you have installed nesscessary ESP8266 NodeMCU board and libraries [[Adafruit_MPU6050](Libraries/Adafruit_MPU6050.rar), [Adafruit_SSD1306](Libraries/Adafruit_SSD1306.rar)].
5. Assemble the circuit according to this figure.
![Circuit Diagram](Images/HAR%20Circuit.jpg)
6. Connect ESP8266 NodeMCU to the computer then upload the code.
7. Place the device in this area.

![Area](Images/area.png)

8. Open Serial Monitor, enter the sample label. There is a time delay 5 seconds to do the activity to collect sensor readings for this activity.
9. Repeat this cycle until you collect your desired samples.
10. Copy the output from the serial monitor then past it in a text notepad and save the file.

### 2. Data Pre-processing & Model Training

1. Navigate to [HAR using SVM](Model%20Building/HAR%20using%20SVM.ipynb) notebook file.
2. Copy the collected dataset file and place it with the notebook in the same folder.
3. Open it using Jupyter Notebooks or Google Colab or what you want.
4. Make sure that you have installed nesscessary libraries:
```
pip install micromlgen numpy pandas matplotlib scikit-learn
```
5. Run the cells from top to bottom.
6. When you reach the model training cell you will find that the model has trained using Support Vector Machine Classifier. That's algorithm was the best one has give me a high accurcy 98.3%.
7. Using micromlgen library we will use module named port. This module used to deploy our model.

### 3. Model Deployment & Prediction

1. Navigate to [Prediction](Prediction/Prediction.ino) file.
2. Copy the trained model file then past it with the prediction arduino code in the same folder.
3. Open the prediction file & connect the cable to the computer.
4. Open the "Tools" menu and select the appropriate board and port for your Arduino board.
4. Make sure that you have installed nesscessary ESP8266 NodeMCU board and libraries [EloquentTinyML](Libraries/EloquentTinyML.rar).
5. Replace the Wi-Fi network credentials (SSID and password) with your own network credentials.
6. Upload the code to the Arduino board.
7. Access the web server by navigating to the IP address of the board in a web browser.

![Web Server](Images/web%20server.jpg)





