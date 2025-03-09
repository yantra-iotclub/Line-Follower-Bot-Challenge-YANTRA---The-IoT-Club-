#define LEFT_SENSOR 2
#define RIGHT_SENSOR 3
#define LEFT_MOTOR_FORWARD 5
#define LEFT_MOTOR_BACKWARD 6
#define RIGHT_MOTOR_FORWARD 9
#define RIGHT_MOTOR_BACKWARD 10
const int motorspeed=50;
void setup() {
pinMode(LEFT_SENSOR, INPUT);
pinMode(RIGHT_SENSOR, INPUT);
pinMode(LEFT_MOTOR_FORWARD, OUTPUT);
pinMode(LEFT_MOTOR_BACKWARD, OUTPUT);
pinMode(RIGHT_MOTOR_FORWARD, OUTPUT);
pinMode(RIGHT_MOTOR_BACKWARD, OUTPUT);
Serial.begin(9600);
}
void loop() {
int leftState = digitalRead(LEFT_SENSOR);
int rightState = digitalRead(RIGHT_SENSOR);
if (leftState == LOW && rightState == LOW) {
moveForward();
}
else if (leftState == HIGH && rightState == LOW) {
turnRight();
}
else if (leftState == LOW && rightState == HIGH) {
turnLeft();
}
else {
stopMotors();
}
delay(50);
}
void moveForward() {
analogWrite(LEFT_MOTOR_FORWARD, motorspeed);
digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
analogWrite(RIGHT_MOTOR_FORWARD, motorspeed);
digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
}
void turnLeft() {
digitalWrite(LEFT_MOTOR_FORWARD, LOW);
digitalWrite(LEFT_MOTOR_BACKWARD, HIGH);
digitalWrite(RIGHT_MOTOR_FORWARD, HIGH);
digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
}
void turnRight() {
digitalWrite(LEFT_MOTOR_FORWARD, HIGH);
digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
digitalWrite(RIGHT_MOTOR_FORWARD, LOW);
digitalWrite(RIGHT_MOTOR_BACKWARD, HIGH);
}
void stopMotors() {
digitalWrite(LEFT_MOTOR_FORWARD, LOW);
digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
digitalWrite(RIGHT_MOTOR_FORWARD, LOW);
digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
}
