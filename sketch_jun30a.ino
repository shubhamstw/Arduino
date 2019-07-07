int firstmotorpin1=8;
int firstmotorpin2=9;
int secondmotorpin1=7;
int secondmotorpin2=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(firstmotorpin1,OUTPUT);
  pinMode(firstmotorpin2,OUTPUT);
  pinMode(secondmotorpin1,OUTPUT);
  pinMode(secondmotorpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(firstmotorpin1,LOW);
  digitalWrite(firstmotorpin2,HIGH);
  digitalWrite(secondmotorpin1,HIGH);
  digitalWrite(secondmotorpin2,LOW);
  delay(10000);
  digitalWrite(firstmotorpin1,HIGH);
  digitalWrite(firstmotorpin2,LOW);
  digitalWrite(secondmotorpin1,LOW);
  digitalWrite(secondmotorpin2,HIGH);
  delay(10000);
  
}
