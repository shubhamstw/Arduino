int sensorpin=10;
int sensorvalue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue=digitalRead(sensorpin);
  Serial.print("The value received from the sensor is ");
  Serial.println(sensorvalue);
  //delay(3000);  
}
