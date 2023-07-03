#include "model.h" // the classifier model
#include <Wire.h> // I2C protocol
#include <Adafruit_MPU6050.h> // to use the MPU6050 accelerometer
#include <Adafruit_Sensor.h> // to use the Adafruit sensors
#include <ESP8266WiFi.h> // to connect to the internet
#include <ESP8266WebServer.h> // to create a web server

// Replace with your network credentials
const char* ssid = "T";
const char* password = "12345678";

// Create an instance of the web server
ESP8266WebServer server(80);

Adafruit_MPU6050 accelerometer; // instantiate the accelerometer object 
Eloquent::ML::Port::SVM classifier; // instantiate the classifier object 
float raw_features[6]; // declare the raw features array in the global scope
String prediction; // declare the prediction variable in the global scope

void setup()
{
  Serial.begin(115200); // begin the Serial communication
  Wire.begin(); // begin the I2C communication
  
  // Connect to Wi-Fi network
  WiFi.begin(ssid, password);
  Serial.println("");
  // Wait for Wi-Fi connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  
  // Print the IP address
  Serial.println(WiFi.localIP());
  
  // Check if the accelerometer is connected and functioning properly
  if (!accelerometer.begin()) {
    Serial.println("Failed to initialize accelerometer. Check connections and try again.");
    while (1); // halt the program if the accelerometer fails to initialize
  }
  
  // Start the web server
  server.on("/", handleRoot); // set the function to handle the root URL
  server.on("/prediction", handlePrediction); // set the function to handle the prediction URL
  server.begin(); // start the server
  Serial.println("Web server started");
}

void loop()
{
  sensors_event_t a, g, temp; // instantiate the sensors' reading object 
  accelerometer.getEvent(&a, &g, &temp); // register the read values to the object declared before

  raw_features[0] = a.acceleration.x;
  raw_features[1] = a.acceleration.y;
  raw_features[2] = a.acceleration.z;
  raw_features[3] = g.gyro.x;
  raw_features[4] = g.gyro.y;
  raw_features[5] = g.gyro.z;
  // do data preprocessing here
  
  prediction = classifier.predictLabel(raw_features); // run inference
 
  Serial.println(prediction); // print the resulting orientation
  
  server.handleClient(); // handle incoming client requests
}

// Function to handle the root URL
void handleRoot() {
  // Create a title for the page
  String html = "<html><head><title>Human Activity Recognition System</title>";
  
  // Add some style and design to the page
  html += "<style>";
  html += "body {background-color: #f2f2f2; font-family: Arial, Helvetica, sans-serif; text-align: center;}";
  html += "h1 {color: #2e6c80;}";
  html += "p {font-size: 24px; color: #333333;}";
  html += ".container {display: inline-block; margin-top: 50px; padding: 20px; border: 1px solid #ccc;}";
  html += "</style>";
  
  // Add the content of the page
  html += "</head><body><div class='container'><h1>Human Activity Recognition System</h1>";
  html += "<p id='prediction'>Prediction: " + prediction + "</p></div>";
  
  // Add some JavaScript to update the prediction in real time
  html += "<script>";
  html += "setInterval(function() {";
  html += "var xhr = new XMLHttpRequest();";
  html += "xhr.onreadystatechange = function() {";
  html += "if (this.readyState == 4 && this.status == 200) {";
  html += "document.getElementById('prediction').innerHTML = 'Prediction: ' + this.responseText;";
  html += "}";
  html += "};";
  html += "xhr.open('GET', '/prediction', true);";
  html += "xhr.send();";
  html += "}, 2000);";
  html += "</script>";
  
  html += "</body></html>";
  
  server.send(200, "text/html", html); // send the HTTP response
}

// Function to handle the prediction URL
void handlePrediction() {
  server.send(200, "text/plain", prediction); // send the prediction as plain text
}
