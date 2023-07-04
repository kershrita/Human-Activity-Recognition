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
4. Make sure that you have installed nesscessary libraries [[Adafruit_MPU6050](Libraries/Adafruit_MPU6050.rar),[Adafruit_SSD1306](Libraries/Adafruit_SSD1306.rar)].
5. Assemble the circuit according to this figure.
![Circuit Diagram](Images/HAR%20Circuit.jpg)
6. Connect ESP8266 NodeMCU to the computer then upload the code.
7. Place the device in this area.
![Circuit Diagram](Images/area.png)
7. Open Serial Monitor, enter the sample label. There is a time delay 5 seconds to do the activity to collect sensor readings for this activity.
8. Repeat this cycle until you collect your desired samples.
