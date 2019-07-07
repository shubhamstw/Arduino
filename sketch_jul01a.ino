int leftmotor1=8;       //motor 1, pin 1, ic pin 2
int leftmotor2=9;       //motor 1, pin 2, ic pin 7
int rightmotor1=5;      //motor 2, pin 1, ic pin 15
int rightmotor2=6;      //motor 2, pin 2, ic pin 10

void setup() {
  // put your setup code here, to run once:
  pinMode(leftmotor1,OUTPUT);
  pinMode(leftmotor2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   //for forward movement
   digitalWrite(leftmotor1,LOW);
   digitalWrite(leftmotor2,HIGH);
   digitalWrite(rightmotor1,LOW);
   digitalWrite(rightmotor2,HIGH);
   delay(10000);

   //for right turn
   //left motor on right motor off
   digitalWrite(leftmotor1,LOW);
   digitalWrite(leftmotor2,HIGH);
   digitalWrite(rightmotor1,LOW);
   digitalWrite(rightmotor2,LOW);
   delay(10000);

  //for left turn
  //right motor on left off
   digitalWrite(leftmotor1,LOW);
   digitalWrite(leftmotor2,LOW);
   digitalWrite(rightmotor1,LOW);
   digitalWrite(rightmotor2,HIGH);
   delay(10000);

   //for back movement
   //both anticlockwise
   digitalWrite(leftmotor1,HIGH);
   digitalWrite(leftmotor2,LOW);
   digitalWrite(rightmotor1,HIGH);
   digitalWrite(rightmotor2,LOW);
   delay(10000);
}
