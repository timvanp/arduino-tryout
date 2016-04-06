// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h>
#include <Servo.h>

#define TRIGGER_PIN  13  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     12  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 100 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

Servo servo;

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
  servo.attach(7);
}

void loop() {
//    delay(1000);
//
//    servo.writeMicroseconds(1000);  
//    Serial.print("Ping: ");
//    Serial.println(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
//    delay(500);
//
//    servo.writeMicroseconds(2500);  
//    Serial.print("Ping: ");
//    Serial.println(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
//    delay(500);    
//
//    Serial.print("Ping: ");
//    Serial.println(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
}

//// Motor A pins (enableA = enable motor, pinA1 = forward, pinA2 = backward)
//int enableA = 0;
//int pinA1 = 1;
//int pinA2 = 2;
//
////Motor B pins (enabledB = enable motor, pinB1 = forward, pinB2 = backward)
//int enableB = 5;
//int pinB1 = 3;
//int pinB2 = 4;
//
////This lets you run the loop a single time for testing
//boolean run = true;
//
//void setup() {
// pinMode(enableA, OUTPUT);
// pinMode(pinA1, OUTPUT);
// pinMode(pinA2, OUTPUT);
//
// pinMode(enableB, OUTPUT);
// pinMode(pinB1, OUTPUT);
// pinMode(pinB2, OUTPUT);
//}
//void loop() {
//  if (run) {
//    delay(500);
//    enableMotors();
//    //Go forward
//    forward(500);
//    //Go backward
//    backward(500);
//    //Turn left
//    turnLeft(400);
//    turnRight(400);
//    coast(200);
//    //Turn right
//    turnRight(400);
//    forward(100);
//    coast(0);
//    //This stops the loop
//    run = false;
//  }
//}
//
////Define high-level H-bridge commands
//
//void enableMotors()
//{
// motorAOn();
// motorBOn();
//}
//
//void disableMotors()
//{
// motorAOff();
// motorBOff();
//}
//
//void forward(int time)
//{
// motorAForward();
// motorBForward();
// delay(time);
//}
//
//void backward(int time)
//{
// motorABackward();
// motorBBackward();
// delay(time);
//}
//
//void turnLeft(int time)
//{
// motorABackward();
// motorBForward();
// delay(time);
//}
//
//void turnRight(int time)
//{
// motorAForward();
// motorBBackward();
// delay(time);
//}
//
//void coast(int time)
//{
// motorACoast();
// motorBCoast();
// delay(time);
//}
//
//void brake(int time)
//{
// motorABrake();
// motorBBrake();
// delay(time);
//}
////Define low-level H-bridge commands
//
////enable motors
//void motorAOn()
//{
// digitalWrite(enableA, HIGH);
//}
//
//void motorBOn()
//{
// digitalWrite(enableB, HIGH);
//}
//
// //disable motors
//void motorAOff()
//{
// digitalWrite(enableB, LOW);
//}
//
//void motorBOff()
//{
// digitalWrite(enableA, LOW);
//}
//
// //motor A controls
//void motorAForward()
//{
// digitalWrite(pinA1, HIGH);
// digitalWrite(pinA2, LOW);
//}
//
//void motorABackward()
//{
// digitalWrite(pinA1, LOW);
// digitalWrite(pinA2, HIGH);
//}
//
////motor B controls
//void motorBForward()
//{
// digitalWrite(pinB1, HIGH);
// digitalWrite(pinB2, LOW);
//}
//
//void motorBBackward()
//{
// digitalWrite(pinB1, LOW);
// digitalWrite(pinB2, HIGH);
//}
//
////coasting and braking
//void motorACoast()
//{
// digitalWrite(pinA1, LOW);
// digitalWrite(pinA2, LOW);
//}
//
//void motorABrake()
//{
// digitalWrite(pinA1, HIGH);
// digitalWrite(pinA2, HIGH);
//}
//
//void motorBCoast()
//{
// digitalWrite(pinB1, LOW);
// digitalWrite(pinB2, LOW);
//}
//
//void motorBBrake()
//{
// digitalWrite(pinB1, HIGH);
// digitalWrite(pinB2, HIGH);
//}
