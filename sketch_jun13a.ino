int potpin=A0;        //pin for potentiometer
int ledpin1=3;        //pin for Red LED
int ledpin2=5;        //pin for Blue LED
int readvoltage;      //variable to store the analog voltage
float writevoltage;   //variable to store the writing voltge
float voltage;        //actual voltage
int waittime=800;     //delay time to wait on serial port



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potpin,INPUT);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readvoltage=analogRead(potpin);
  voltage=(5./1023.)*readvoltage;
  writevoltage=(255./5.)*voltage;
  analogWrite(ledpin1,writevoltage);
  analogWrite(ledpin2,writevoltage);
  delay(readvoltage);
  analogWrite(ledpin1,0);
  analogWrite(ledpin2,0);
  delay(readvoltage);
  Serial.println(readvoltage);
  Serial.println(voltage);
  Serial.println(" ");
  delay(waittime);
}
