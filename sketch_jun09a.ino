int ledno1=8;
int ledno2=2;
int ledno3=4;
int ledno4=6;




void setup() {
  // put your setup code here, to run once:
  pinMode(ledno1,OUTPUT);
  pinMode(ledno2,OUTPUT);
  pinMode(ledno3,OUTPUT);
  pinMode(ledno4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(ledno1,LOW);
  digitalWrite(ledno2,LOW);
  digitalWrite(ledno3,LOW);
  digitalWrite(ledno4,LOW);
  delay(1000);*/
  digitalWrite(ledno1,HIGH);
  digitalWrite(ledno2,LOW);
  digitalWrite(ledno3,LOW);
  digitalWrite(ledno1,LOW);
  delay(1000);
  digitalWrite(ledno1,HIGH);
  digitalWrite(ledno2,HIGH);
  digitalWrite(ledno3,LOW);
  digitalWrite(ledno4,LOW);
  delay(1000);
  digitalWrite(ledno1,HIGH);
  digitalWrite(ledno2,HIGH);
  digitalWrite(ledno3,HIGH);
  digitalWrite(ledno4,LOW);
  delay(1000);
  digitalWrite(ledno1,HIGH);
  digitalWrite(ledno2,HIGH);
  digitalWrite(ledno3,HIGH);
  digitalWrite(ledno4,HIGH);
  delay(1000);
  digitalWrite(ledno1,HIGH);
  digitalWrite(ledno2,HIGH);
  digitalWrite(ledno3,HIGH);
  digitalWrite(ledno4,LOW);
  delay(1000);
  digitalWrite(ledno1,HIGH);
  digitalWrite(ledno2,HIGH);
  digitalWrite(ledno3,LOW);
  digitalWrite(ledno4,LOW);
  delay(1000);
  digitalWrite(ledno1,HIGH);
  digitalWrite(ledno2,LOW);
  digitalWrite(ledno3,LOW);
  digitalWrite(ledno1,LOW);
  delay(1000);
  
}
