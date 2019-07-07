int trigpin=8;
int echopin=3;
//int ledpinblue=2;
//int ledpinyellow=9;
//int ledpingreen=4;
int ledpinred=11;
float velocity=390.63;   //in m/s
float distance;   //in cms
float duration;   //in microseconds

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  //pinMode(ledpinblue,OUTPUT);
  //pinMode(ledpinyellow,OUTPUT);
  //pinMode(ledpingreen,OUTPUT);
  pinMode(ledpinred,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(20);
  digitalWrite(trigpin,LOW);   //pulse set 

  duration=pulseIn(echopin,HIGH);  //in microseconds

  distance=(velocity*duration)/20000;  //calculated in cms
  
  /*Serial.print("The distance of the object from the sensor is ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(3000);*/

  if(distance<=5)
  {
    digitalWrite(ledpinred,HIGH);
   // digitalWrite(ledpinblue,LOW);
   // digitalWrite(ledpinyellow,LOW);
    //digitalWrite(ledpingreen,LOW);
  }
  /*else if(distance<=10)
  {
    digitalWrite(ledpingreen,LOW);
    digitalWrite(ledpinblue,HIGH);
    digitalWrite(ledpinyellow,LOW);
    digitalWrite(ledpinred,LOW);
  }
  else if(distance<=15)
  {
    
    digitalWrite(ledpingreen,LOW);
    digitalWrite(ledpinblue,LOW);
    digitalWrite(ledpinyellow,HIGH);
    digitalWrite(ledpinred,LOW);
  }*/
  else
  {
    //digitalWrite(ledpingreen,HIGH);
    //digitalWrite(ledpinblue,LOW);
    //digitalWrite(ledpinyellow,LOW);
    digitalWrite(ledpinred,LOW);
  }
}
