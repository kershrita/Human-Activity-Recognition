# Human Activity Recognition

The Human Activity Recognition System repository provides a comprehensive guide, code samples, and instructions to help you build and deploy a system capable of recognizing human activities based on sensor data. It combines data pre-processing, machine learning, Arduino integration, and Jupyter Notebook analysis, making it a valuable resource for anyone interested in developing and implementing human activity recognition applications.

## Table of Contents

- [Getting Started](#getting-started)
	- [Data Collection](#1-data-collection)
	- [Data Pre-processing & Model Training](#2-data-pre-processing-&-model-training)
	- [Model Deployment & Prediction](#3-model-deployment-&-prediction)
- [Features](#features)
- [Configuration](#configuration)
- [Acknowledgments](#acknowledgments)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Getting Started

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
6. Components
	- 1 * ESP8266 NodeMCU
	- 1 * MPU-6050 Module
	- 1 * TP4056 Charger Module
	- 1 * 3.7V Battery
	- 1 * Voltage Regulator
	- 1 * LED
	- 1 * 220 Ohms Resistor
	- 1 * Switch
	- 1 * Power Jack

7. Connect ESP8266 NodeMCU to the computer then upload the code.
8. Place the device in this area.

![Area](Images/area.png)

9. Open Serial Monitor, enter the sample label. There is a time delay 5 seconds to do the activity to collect sensor readings for this activity.
10. Repeat this cycle until you collect your desired samples.
11. Copy the output from the serial monitor then past it in a text notepad and save the file.

### 2. Data Pre-processing & Model Training

1. Navigate to [HAR using SVM](Model%20Building/HAR%20using%20SVM.ipynb) notebook file.
2. Copy the collected dataset file and place it with the notebook in the same folder.
3. Open it using Jupyter Notebooks or Google Colab or what you want.
4. Make sure that you have installed nesscessary libraries:
```
pip install micromlgen mlxtend numpy pandas matplotlib scikit-learn
```
5. Run the cells from top to bottom.
6. When you reach the model training cell you will find that the model has trained using Support Vector Machine Classifier. That's algorithm was the best one has give me a high accurcy 98.3%.
7. Using micromlgen library we will use module named port. This module used to deploy our model.

### 3. Model Deployment & Prediction

1. Navigate to [Prediction](Prediction/Prediction.ino) file.
2. Copy the trained model file then past it with the prediction arduino code in the same folder.
3. Open the prediction file & connect the cable to the computer.
4. Open the "Tools" menu and select the appropriate board and port for your Arduino board.
4. Make sure that you have installed nesscessary libraries [EloquentTinyML](Libraries/EloquentTinyML.rar).
5. Replace the Wi-Fi network credentials (SSID and password) with your own network credentials.
6. Upload the code to the Arduino board.
7. Access the web server by navigating to the IP address of the board in a web browser.

![Web Server](Images/web%20server.jpg)

**Notes**: In folder [Documents](Documents)
- [3d Box](Documents/HAR%20Box.stl) designed for the project, find the design [here](https://www.tinkercad.com/things/li7DokochbC).
- Documentation and some guidance files if you have a problem you can find the solution there or maybe contact with me to solve it.
- If you want to plot Accelerometer & Gyroscope in serial plotter you can use [plotterMPU](plotterMPU/plotterMPU.ino) code.

## Features

- **Activity Classification**: Accurately classifies and recognizes different human activities based on sensor data, including walking, sitting and standing.
- **Real-time Monitoring**: Processes sensor data in real-time, allowing continuous monitoring and recognition of human activities as they happen.
- **Data Pre-processing**: Includes techniques to clean and normalize sensor data, improving the quality of input for the classification model.
- **Machine Learning Algorithms**: Employs machine learning algorithms such as SVM model to learn patterns and accurately classify activities.
- **Model Training and Evaluation**: Supports model training and fine-tuning using labeled data, with evaluation metrics to assess model performance.
- **Integration with Arduino**: Provides instructions and code samples for deploying the model on an Arduino board, enabling real-time activity recognition in embedded systems or IoT applications.

## Configuration

The Human Activity Recognition (HAR) System offers the following key features:

- **Accurate and Real-Time Health and Fitness Data**: Provides real-time and accurate data on users' health and fitness activities, enabling progress tracking and effective goal achievement.
- **Form and Technique Guidance**: Offers guidance and feedback on proper form and technique during physical activities, reducing the risk of injuries and improving performance.
- **Assistance for Elderly or Disabled Individuals**: Assists elderly or disabled individuals with safety and daily living activities, enhancing independence and overall quality of life.
- **Goal Tracking and Achievement**: Allows users to set and track personal goals, providing insights into activity levels and facilitating progress towards targets.
- **Customization and Personalization**: Offers customization options for activity profiles, target zones, and personalized recommendations, catering to individual preferences and needs.
- **Integration with Mobile Apps and Wearable Devices**: Seamlessly integrates with mobile apps and wearable devices, enabling easy access to activity data, notifications, and synchronization across platforms.

## Acknowledgments

We would like to acknowledge the following resources and libraries that have been instrumental in developing Kids Learning Program:

- **[Arduino IDE](https://www.arduino.cc/en/software)**:  An open-source integrated development environment (IDE) used for programming Arduino boards.
- **[Jupyter Notebook](https://jupyter.org/)**: An open-source web application that allows you to create interactive documents containing live code, visualizations, and explanations. It supports various programming languages and is commonly used for data analysis, machine learning, and prototyping.
- **[Tinkercad](https://www.tinkercad.com)**: An online platform that allows you to simulate and create virtual electronic circuits. It offers a wide range of components, including microcontrollers, sensors, and displays, enabling you to design and test circuits before physically building them. Tinkercad is a valuable tool for prototyping and experimenting with electronics projects.
- **ESP8266 NodeMCU**: An open-source development board that combines the ESP8266 Wi-Fi module with a microcontroller unit (MCU). It provides an easy and cost-effective way to add Wi-Fi connectivity to your projects and is widely used in IoT (Internet of Things) applications.
- **[Adafruit_MPU6050](Libraries/Adafruit_MPU6050.rar)**: A library for interfacing with the MPU6050 sensor module, which combines an accelerometer and gyroscope. It simplifies reading sensor data and enables tasks such as motion tracking and gesture recognition in Arduino projects.
- **[Adafruit_SSD1306](Libraries/Adafruit_SSD1306.rar)**: A library for controlling SSD1306-based OLED displays. It provides an easy-to-use interface for drawing shapes, text, and images on small monochrome OLED screens, facilitating integration into Arduino projects.
- **[EloquentTinyML](Libraries/EloquentTinyML.rar)**: A lightweight machine learning library designed for microcontrollers and embedded systems. It allows trained models to be deployed directly on resource-constrained devices, enabling local inference without external servers. EloquentTinyML provides efficient machine learning algorithms and optimizations for developing intelligent edge devices and IoT applications.
- **[micromlgen](https://pypi.org/project/micromlgen/)**: A Python library for converting trained machine learning models into optimized C or Arduino code suitable for microcontrollers. It simplifies the deployment of models on resource-constrained devices, enabling real-time inference without external processing.
- **[mlxtend](https://pypi.org/project/mlxtend/)**: A Python library providing additional functionality for data preprocessing, feature engineering, model evaluation, and ensemble learning. It complements popular machine learning libraries like scikit-learn, offering tools for tasks such as feature selection, dimensionality reduction, and model stacking.
- **[NumPy](https://numpy.org/doc/stable/)**: The fundamental package for scientific computing in Python. It provides powerful support for multi-dimensional arrays and mathematical functions. Visit the NumPy documentation for tutorials, API reference, and examples.
- **[pandas](https://pandas.pydata.org/docs/)**: A versatile library for data manipulation and analysis. It offers easy-to-use data structures and data analysis tools. Check out the pandas documentation for comprehensive guides, examples, and the API reference.
- **[Matplotlib](https://matplotlib.org/stable/users/index.html)**: A plotting library for creating a wide range of visualizations. It supports various plot types and customization options. Explore the Matplotlib documentation for detailed examples and a gallery of plots.
- **[scikit-learn](https://scikit-learn.org/stable/index.html)**: A machine learning library providing tools for classification, regression, clustering, and more. It offers a consistent API and various algorithms. Refer to the scikit-learn documentation for user guides, tutorials, and the API reference.

## Contribution

Thank you for considering contributing to the Human Activity Recognition (HAR) System project! Contributions are welcomed and encouraged. Whether you want to report a bug, suggest new features, or contribute code improvements, your input is valuable in making this project better for everyone.

To contribute to the project, please follow these steps:

1. Fork the repository and create a new branch for your contribution.
2. Make the necessary changes or additions in your branch.
3. Test your changes to ensure they do not introduce any issues or break existing functionality.
4. Submit a pull request, clearly describing the changes you have made and providing any relevant context or documentation.
5. Your pull request will be reviewed by the project maintainers. Feedback or suggestions may be provided to further refine your contribution.
6. Once your pull request is approved and merged, your changes will become part of the main project.

## License

Human Activity Recognition System is released under the [GNU License](LICENSE).

## Contact

- Mail: ashrafabdulkhaliq80@gmail.com
- LinkedIn: https://www.linkedin.com/in/ashraf-abdulkhaliq
- GitHub: https://github.com/kershrita