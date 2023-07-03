#include <Wire.h>
#include <Adafruit_MPU6050.h>

Adafruit_MPU6050 mpu;

int count = 0; // Counter for number of samples collected
String sampleLabel = ""; // sampleLabel for the activity
void setup() {
  Serial.begin(115200);
  Wire.begin(D2, D1); // Initialize I2C communication with SDA=D2, SCL=D1
  mpu.begin(); // Initialize MPU6050 sensor
}

void loop() {
  if (count == 0) {
    Serial.println("Enter the Label for the activity:");
    while (Serial.available() == 0); // Wait for user input
    sampleLabel = Serial.readStringUntil('\n'); // Read the sampleLabel
    Serial.print("Collecting samples for "); Serial.println(sampleLabel);
    delay(5000);
  }
  

  // Read accelerometer data
  sensors_event_t a, g, temp; //instanciate the sensors's reading object 
  mpu.getEvent(&a, &g, &temp);

  // Send data to serial port
  Serial.print(a.acceleration.x); Serial.print(","); // Accelerometer X-axis
  Serial.print(a.acceleration.y); Serial.print(","); // Accelerometer Y-axis
  Serial.print(a.acceleration.z); Serial.print(","); // Accelerometer Z-axis
  Serial.print(g.gyro.x); Serial.print(","); // Gyroscope X-axis
  Serial.print(g.gyro.y); Serial.print(","); // Gyroscope Y-axis
  Serial.print(g.gyro.z); Serial.print(","); // Gyroscope Z-axis
  Serial.println(sampleLabel); // sampleLabel for the activity

  count++; // Increment the sample count

  if (count == 300) { // If 50 samples collected, reset the counter and prompt for new sampleLabel
    count = 0;
    Serial.println("Enter 'end' to stop collecting data or enter a new label:");
    while (Serial.available() == 0); // Wait for user input
    sampleLabel = Serial.readStringUntil('\n'); // Read the sampleLabel

    if (sampleLabel == "end") { // If user enters 'end', stop collecting data and exit the loop
      Serial.println("Data collection stopped.");
    } else { // Otherwise, print the new sampleLabel and continue collecting data
      Serial.print("Collecting samples for "); Serial.println(sampleLabel);
    }
  }

  delay(50); // Wait for 100 milliseconds
}
