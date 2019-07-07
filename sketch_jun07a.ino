
int LEDpin=13;
int delaytimeon=200;
int delaytimeoff=900;


void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDpin,HIGH);
  delay(delaytimeon);
  digitalWrite(LEDpin,LOW);
  delay(delaytimeoff);
  
}
