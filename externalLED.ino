int LEDpin1=12;
int LEDpin2=13;
int delaytime=1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin1,OUTPUT);
  pinMode(LEDpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDpin2,LOW);
  digitalWrite(LEDpin1,HIGH);
  delay(delaytime);
  digitalWrite(LEDpin1,LOW);
  delay(delaytime);
}
