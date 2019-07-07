int firstmotor1=12;
int firstmotor2=11;          //pins to access first motor

int secondmotor1=9;
int secondmotor2=8;          //pins to access second motor

void setup() {
  // put your setup code here, to run once:
  pinMode(firstmotor1,OUTPUT);
  pinMode(firstmotor2,OUTPUT);
  pinMode(secondmotor1,OUTPUT);
  pinMode(secondmotor2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(firstmotor1,HIGH);
  digitalWrite(firstmotor2,LOW);               //first mootr will rotate
  digitalWrite(secondmotor1,HIGH);
  digitalWrite(secondmotor2,LOW);              //second motor also in the same direction      
  /*delay(10000);
  digitalWrite(firstmotor1,LOW);
  digitalWrite(firstmotor2,HIGH);               //first mootr will rotate
  digitalWrite(secondmotor1,LOW);
  digitalWrite(secondmotor2,HIGH);              //second motor also in the same direction      
  delay(10000);
  digitalWrite(firstmotor1,LOW);
  digitalWrite(firstmotor2,LOW);               //first mootr will rotate
  digitalWrite(secondmotor1,LOW);
  digitalWrite(secondmotor2,HIGH);              //second motor also in the same direction      
  delay(10000);*/ 
}
