// main.ino - Line Follower Bot Challenge | YANTRA - The IoT Club
// This file contains the main logic for the line follower bot.

#include "sensor_config.ino"
#include "motor_control.ino"

void setup() {
    // Configure sensors and motors
    configureSensors();
    configureMotors();
    
    // Stop motors initially
    stopMotors();
}

void loop() {
    int rightIRSensorValue = readRightSensor();
    int leftIRSensorValue = readLeftSensor();

    // If none of the sensors detect a black line, move forward
    if (rightIRSensorValue == LOW && leftIRSensorValue == LOW) {
        rotateMotors(MOTOR_SPEED, MOTOR_SPEED);
    }
    // If right sensor detects a black line, turn right
    else if (rightIRSensorValue == HIGH && leftIRSensorValue == LOW) {
        rotateMotors(-MOTOR_SPEED, MOTOR_SPEED);
    }
    // If left sensor detects a black line, turn left
    else if (rightIRSensorValue == LOW && leftIRSensorValue == HIGH) {
        rotateMotors(MOTOR_SPEED, -MOTOR_SPEED);
    }
    // If both sensors detect a black line, stop
    else {
        stopMotors();
    }
}
