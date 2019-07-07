int sensorpin=7;    //infrared sensor pin
int value   ;        //value to hold the output of the sensor pin
int ledpin=10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorpin,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=digitalRead(sensorpin);
  /*Serial.print("The value received from the sensor  is ");
  Serial.println(value);
  delay(3000);*/
  if(value==1)
  {
    digitalWrite(ledpin,HIGH);
  }
  else
  {
    digitalWrite(ledpin,LOW);
  }
}
