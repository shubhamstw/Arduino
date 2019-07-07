#include<Servo.h>

int potpin=A0;
int servopin=9;
int servodelay=15;
float potvalue;
float servopos;
int blueled=2;
int redled=7;
int leddelay=10;

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servopin);
  Serial.begin(9600);
  pinMode(potpin,INPUT);
  pinMode(blueled,OUTPUT);
  pinMode(redled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potvalue=analogRead(potpin);
  servopos=(180./1023.)*potvalue;
  Serial.println(potvalue);
  Serial.println(servopos);
  Serial.println(" ");
  delay(1000);
  myservo.write(servopos);
  delay(servodelay);
  if(myservo.read()<80)
  {
    myservo.attach(servopin);
    digitalWrite(blueled,HIGH);
    digitalWrite(redled,LOW);
  }
  else if(myservo.read()>100)
  {
    myservo.attach(servopin);
    digitalWrite(redled,HIGH);
    digitalWrite(blueled,LOW);
  }
  else
  {
    myservo.detach();
    digitalWrite(blueled,LOW);
    digitalWrite(redled,LOW);
  }
}
