#include <Servo.h>
Servo moj_servo;

void setup(){
  moj_servo.attach(3);
  Serial.begin(9600);
}

void loop(){
  moj_servo.write(90); //številka v oklepaju pomeni premik na kot, ki ga določa številka - ne gre torej za relativni premik ampak za pomik na pozicijo
  delay(50);
  float izmerjen_kot = moj_servo.read();
  Serial.println(izmerjen_kot);
  delay(1000);
}