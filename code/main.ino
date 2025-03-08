// main.ino - Line Follower Bot Challenge | YANTRA - The IoT Club
// This file contains the main logic for the line follower bot.

#include "sensor_config.ino"
#include "motor_control.ino"

void setup() {
    Serial.begin(9600);
    configureSensors();
    setupMotors();
}

void loop() {
    int leftSensor = digitalRead(leftSensorPin);
    int rightSensor = digitalRead(rightSensorPin);
    
    if (leftSensor == LOW && rightSensor == LOW) {
        moveForward();
    } else if (leftSensor == HIGH && rightSensor == LOW) {
        turnLeft();
    } else if (leftSensor == LOW && rightSensor == HIGH) {
        turnRight();
    } else {
        stopMotors();
    }
}

