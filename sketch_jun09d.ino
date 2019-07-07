int ledno1=3;
int ledno2=5;
int ledno3=6;
int ledno4=9;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledno1,OUTPUT);
  pinMode(ledno2,OUTPUT);
  pinMode(ledno3,OUTPUT);
  pinMode(ledno4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1;i<=2;i++)
  {
    digitalWrite(ledno1,HIGH);
    digitalWrite(ledno3,HIGH);
    delay(100);
    digitalWrite(ledno1,LOW);
    digitalWrite(ledno3,LOW);
    delay(100);
  }
  for(int j=1;j<=2;j++)
  {
    digitalWrite(ledno2,HIGH);
    digitalWrite(ledno4,HIGH);
    delay(100);
    digitalWrite(ledno2,LOW);
    digitalWrite(ledno4,LOW);
    delay(100);
  }

}
