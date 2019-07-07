int leftmotor1=8;     //ic pin 2
int leftmotor2=9;     //ic pin 7
int rightmotor1=6;    //ic pin 10
int rightmotor2=5;    //ic pin 15
int leftsensor=11;    //left sensor output pin
int rightsensor=10;   //right sensor output pin 
int leftvalue;        //variable to read left sensor value
int rightvalue;        //variable to read right sensor value

void setup() {
  // put your setup code here, to run once:
  pinMode(leftmotor1,OUTPUT);
  pinMode(leftmotor2,OUTPUT);
  pinMode(rightmotor1,OUTPUT);
  pinMode(rightmotor2,OUTPUT);
  pinMode(leftsensor,INPUT);
  pinMode(rightsensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leftvalue=digitalRead(leftsensor);      //raeding value from leftsensor
  rightvalue=digitalRead(rightsensor);   //reading value from right sensor

  if((leftvalue==1)&&(rightvalue==0))     //if left sensor falls on black strip,move left,call turnleft()
    turnleft();
  else if((leftvalue==0)&&(rightvalue==1)) //if right sensor falls on black strip,move right,call turnright()
    turnright();
  else if((leftvalue==1)&&(rightvalue==1))  //if both sensor falls on black strip,stop,call pause()
    pause();
  else                                      //if sensor doesn't fall on balck strip,keep moovng,call moveforward() 
    moveforward();
}

//function to turn left
//left motor off , right motor on
void turnleft()
{
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,HIGH);
  digitalWrite(rightmotor2,LOW);
}

//function to turn right
//right motor off , left motor on
void turnright()
{
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,HIGH);
  digitalWrite(rightmotor1,LOW);
  digitalWrite(rightmotor2,LOW);
}

//function to stop
//both motors off
void pause()
{
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,LOW);
  digitalWrite(rightmotor1,LOW);
  digitalWrite(rightmotor2,LOW);
}

//function to move forward
//both motors moving in same direction
void moveforward()
{
  digitalWrite(leftmotor1,LOW);
  digitalWrite(leftmotor2,HIGH);
  digitalWrite(rightmotor1,HIGH);
  digitalWrite(rightmotor2,LOW);
}
