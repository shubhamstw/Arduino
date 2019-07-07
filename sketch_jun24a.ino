#include<Servo.h>

int trigpin=8;
int echopin=3;
int servopin=6;
int ledpin=11;
float velocity=390.6;  //in m/s
float distance;
float duration;
int pos=90;    //position of servo to set at 90 degrees

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servopin);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(20);
  digitalWrite(trigpin,LOW);

  duration=pulseIn(echopin,HIGH);      //in microseconds

  distance=(velocity*duration)/20000;   //in cms

  if(distance<=10)
  {
    myservo.write(pos);
    analogWrite(ledpin,255);
  }
  else
    myservo.write(0);
    analogWrite(ledpin,0);
}
