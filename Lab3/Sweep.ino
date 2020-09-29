#include <Servo.h>  // add servo library
 
Servo myservo;  // servo object
 
int potenPin = 0;  // analog pin for potentiometer
int val;    // analog pin value variable
 
void setup() {
  myservo.attach(9);  // attaches servo to pin 9 
}
 
void loop() {
  val = analogRead(potenPin);          // reads potentiometer value (0 to 1023)
  val = map(val, 0, 1023, 0, 180);     // scale angle range
  myservo.write(val);                  // sets position to value of ptentiometer
  delay(15);                           // waits for servo to reach destination
}
