#define LEFT_SENSOR 2
#define RIGHT_SENSOR 3
#define IN1 5
#define IN2 6
#define IN3 9
#define IN4 10
 
#define SPEED 120     // Normal movement speed
#define TURN_SPEED 90 // Turning speed
 
void setup() {
   pinMode(LEFT_SENSOR, INPUT);
   pinMode(RIGHT_SENSOR, INPUT);
   
   pinMode(IN1, OUTPUT);
   pinMode(IN2, OUTPUT);
   pinMode(IN3, OUTPUT);
   pinMode(IN4, OUTPUT);
 
   stopMotors();
}
 
void loop() {
   int leftSensor = digitalRead(LEFT_SENSOR);
   int rightSensor = digitalRead(RIGHT_SENSOR);
 
   if (leftSensor == 0 && rightSensor == 0) {
       moveForward(); // Move Forward
   }
   else if (leftSensor == 1 && rightSensor == 0) {
       turnRight(); // Turn Right
   }
   else if (leftSensor == 0 && rightSensor == 1) {
       turnLeft(); // Turn Left
   }
   else {
       stopMotors(); // Stop if no line is detected
   }
}
 
void moveForward() {
   analogWrite(IN1, SPEED);
   digitalWrite(IN2, LOW);
   analogWrite(IN3, SPEED);
   digitalWrite(IN4, LOW);
}
 
void turnLeft() {
   analogWrite(IN1, LOW);        // Left motor stops
   analogWrite(IN2, TURN_SPEED); // Left motor reverses slightly
   analogWrite(IN3, TURN_SPEED); // Right motor forward
   digitalWrite(IN4, LOW);
}
 
void turnRight() {
   analogWrite(IN1, TURN_SPEED); // Left motor forward
   digitalWrite(IN2, LOW);
   analogWrite(IN3, LOW);        // Right motor stops
   analogWrite(IN4, TURN_SPEED); // Right motor reverses slightly
}
 
void stopMotors() {
   analogWrite(IN1, 0);
   digitalWrite(IN2, LOW);
   analogWrite(IN3, 0);
   digitalWrite(IN4, LOW);
}
