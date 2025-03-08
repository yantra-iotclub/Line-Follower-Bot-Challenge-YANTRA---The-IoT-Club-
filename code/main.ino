// main.ino - Line Follower Bot Challenge | YANTRA - The IoT Club
// Main control logic for the line follower bot

#include "sensor_config.ino"
#include "motor_control.ino"

#define IR_SENSOR_RIGHT 11
#define IR_SENSOR_LEFT 12
#define MOTOR_SPEED 50

void setup() {
    configureSensors();
    configureMotors();
    stopMotors();
}

void loop() {
    int rightIRSensorValue = digitalRead(IR_SENSOR_RIGHT);
    int leftIRSensorValue = digitalRead(IR_SENSOR_LEFT);

    if (rightIRSensorValue == LOW && leftIRSensorValue == LOW) {
        rotateMotors(MOTOR_SPEED, MOTOR_SPEED); // Move forward
    } else if (rightIRSensorValue == HIGH && leftIRSensorValue == LOW) {
        rotateMotors(-MOTOR_SPEED, MOTOR_SPEED); // Turn right
    } else if (rightIRSensorValue == LOW && leftIRSensorValue == HIGH) {
        rotateMotors(MOTOR_SPEED, -MOTOR_SPEED); // Turn left
    } else {
        stopMotors(); // Stop when both sensors detect black
    }
}
