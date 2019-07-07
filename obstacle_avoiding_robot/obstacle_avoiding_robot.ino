#include<Servo.h>

int leftmotor1=8;     // ic pin 2
int leftmotor2=9;     // ic pin 7
int rightmotor1=6;    //ic pn 10
int rightmotor2=5;    //ic pin 15
int echopin=11;
int trigpin=12;
int servopin=2;
float velocity=390.5;  // in m/s
//float duration;        // in microseconds
float distance;        // in cms

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(servopin);
  pinMode(leftmotor1,OUTPUT);
  pinMode(leftmotor2,OUTPUT);
  pinMode(rightmotor1,OUTPUT);
  pinMode(rightmotor2,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float rightdistance;     // gives the direction of right after turning
  float leftdistance;      // gives the direction of left after turning
  
  /*digitalWrite(trigpin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(20);
  digitalWrite(trigpin,LOW);    //pulse setted

  duration=pulseIn(echopin,HIGH);  //returning time in microseconds

  distance=(velocity*duration)/20000;   // giving distance in cms*/
  delay(1000);
  distance=moveforward();          //makes the robot move forward and returns the distance from the obstacle
  
  if(distance<=8)                  // takes action depending upon the distance returned by the function
  {
    pause();
    delay(1000);
    movebackward();
    delay(2000);
    pause();
    delay(1000);
    
    rightdistance=turnright();     //calling the function to rotate the ultrasonic sensor towards right
    Serial.print("Right distance is ");
    Serial.print(rightdistance);
    delay(1000);
    leftdistance=turnleft();       //calling the function to rotate the ultrasonic sensor towards left
    Serial.print("Left distance is ");
    Serial.print(leftdistance);
    delay(1000);

     if(rightdistance>=leftdistance)
        {
          moveright();
          delay(2050);
          Serial.println("Moving Right");
        }
     else
        {
          moveleft();
          delay(2050);
          Serial.println("Moving Left");
        }
  }
}

float turnright()                    // function to turn servo right
{
   float rightdistance;
   float rightduration;
   
   myservo.write(12);
 
   digitalWrite(trigpin,LOW);
   delayMicroseconds(2000);
   digitalWrite(trigpin,HIGH);
   delayMicroseconds(20);
   digitalWrite(trigpin,LOW);    //pulse setted

   rightduration=pulseIn(echopin,HIGH);
   rightdistance=(velocity*rightduration)/20000;    //in cms
   delay(2000);
   
   myservo.write(88);
   
   return rightdistance;
}

float turnleft()                    // function to turn the servo towards left
{
  float leftduration;
  float leftdistance;

  digitalWrite(trigpin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(20);
  digitalWrite(trigpin,LOW);    //pulse setted

  myservo.write(175);            

  leftduration=pulseIn(echopin,HIGH);
  leftdistance=(velocity*leftduration)/20000;   //in cms
  delay(2000);
  
  myservo.write(88);
  
  return leftdistance;
}

float moveforward()               //function to move forward and return the forward distance
{
  float distance;
  float duration;

  
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,HIGH);
  digitalWrite(rightmotor1,HIGH);
  digitalWrite(rightmotor2,LOW);
  
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(20);
  digitalWrite(trigpin,LOW);    //pulse setted

  duration=pulseIn(echopin,HIGH);
  distance=(velocity*duration)/20000;    //in cms
  Serial.print("The forward distance is ");
  Serial.println(distance);

  return distance;            //returning distance to take action
}

void movebackward()          //making the robot to turn backward
{
  digitalWrite(leftmotor1,HIGH);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,LOW);
  digitalWrite(rightmotor2,HIGH);
}

void moveright()          //right motor off , left motor on
{
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,HIGH);
  digitalWrite(rightmotor1,LOW);
  digitalWrite(rightmotor2,LOW);
}

void moveleft()        //right motor off  lrft motor on
{
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,HIGH);
  digitalWrite(rightmotor2,LOW);
}

void pause()        //to make the robot stop
{
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,LOW);
  digitalWrite(rightmotor2,LOW);
}
