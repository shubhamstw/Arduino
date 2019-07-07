#include<LiquidCrystal.h>
//#include<Servo.h>

LiquidCrystal mylcd(10,9,5,4,3,2);
//Servo myservo;

int trigpin=11;
int echopin=12;
//int servopin=7;
float velocity=390.6;    //in m/s
float duration;
float distance;    //in cms
//float pos=0;

void setup() {
  // put your setup code here, to run once:
  mylcd.begin(16,2);
  mylcd.setCursor(0,0);
  mylcd.print("Distance:");
  /*mylcd.setCursor(0,1);
  mylcd.print("Angle:");
  myservo.attach(servopin);*/
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(20);
  digitalWrite(trigpin,LOW);   //signal set

  duration=pulseIn(echopin,HIGH);   //in microseconds
   
  distance=(velocity*duration)/20000;  // in cms
 
  if(distance<1)
  {
    distance=distance*10;
    mylcd.setCursor(9,0);
    mylcd.print("                ");
    mylcd.setCursor(9,0);
    mylcd.print(distance);
    mylcd.print("mm");
    delay(1000);
  }
  else if(distance>=100)
  {
    distance=distance/100;
    mylcd.setCursor(9,0);
    mylcd.print("                ");
    mylcd.setCursor(9,0);
    mylcd.print(distance);
    mylcd.print("m");
    delay(1000);
  }
  else
  {
    mylcd.setCursor(9,0);
    mylcd.print("                ");
    mylcd.setCursor(9,0);
    mylcd.print(distance);
    mylcd.print("cm");
    delay(1000);
  }
   /* pos=5.5*distance;
    myservo.write(pos);

    mylcd.setCursor(6,1);
    mylcd.print("                ");
    mylcd.setCursor(6,1);
    mylcd.print(pos);
    mylcd.print(" deg");
    delay(1000);*/
    
}
