#include<Servo.h>    //attach the servo library

int servopin=9;     //servo control pin
int servodelayfwd=25;//servo delay time 
int servodelaybc=25;        

Servo myservo;      //object to servo class

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servopin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=20;i<=180;i+=1)
  {
    myservo.write(i);
    delay(servodelayfwd);
  }
  for(int j=160;j>=0;j=j-1)
  {
  myservo.write(j);
  delay(servodelaybc);
  }
//  myservo.writeMicroseconds(1500);
  
}
