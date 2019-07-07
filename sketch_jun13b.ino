int redled=9;
int greenled=10;
int blueled=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(blueled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeated:
  analogWrite(redled,0);
  analogWrite(blueled,0);
    for(int j=0;j<=255;j++)
    {
       analogWrite(greenled,j);
       delay(500);
       analogWrite(greenled,255);
       delay(500);
    }
  
}
