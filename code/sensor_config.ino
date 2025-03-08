// sensor_config.ino - Line Follower Bot Challenge | YANTRA - The IoT Club
// This file handles IR sensor configuration and reading.

#define IR_SENSOR_RIGHT 11
#define IR_SENSOR_LEFT 12

void configureSensors() {
    pinMode(IR_SENSOR_RIGHT, INPUT);
    pinMode(IR_SENSOR_LEFT, INPUT);
}

int readRightSensor() {
    return digitalRead(IR_SENSOR_RIGHT);
}

int readLeftSensor() {
    return digitalRead(IR_SENSOR_LEFT);
}

