int ledno1=3;
int ledno2=5;
int ledno3=6;
int ledno4=9;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledno1,OUTPUT);
  pinMode(ledno3,OUTPUT);
  pinMode(ledno2,OUTPUT);
  pinMode(ledno4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    analogWrite(ledno2,0);
    analogWrite(ledno4,0);
  for(int i=0;i<=255;i++)
  {
    analogWrite(ledno1,i);
    analogWrite(ledno3,i);
    delay(80);
  }
  analogWrite(ledno1,0);
    analogWrite(ledno3,0);
    
  for(int j=0;j<=255;j++)
  {
    analogWrite(ledno2,j);
    analogWrite(ledno4,j);
    delay(80);
  
  }
}
