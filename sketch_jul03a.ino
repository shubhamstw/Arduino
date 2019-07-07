#include<Servo.h>

int servopin=2;
int pos=90;

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servopin);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(pos);
}
