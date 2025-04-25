#include <Servo.h>

Servo myServo;
int angle;

void setup() {
  Serial.begin(9600);
  myServo.attach(9);  // Connect your servo signal wire to pin 9
}

void loop() {
  if (Serial.available()) {
    angle = Serial.parseInt();  // Read an integer (angle)
    if (angle >= 0 && angle <= 180) {
      myServo.write(angle);
    }
  }
}
