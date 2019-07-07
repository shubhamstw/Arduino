int pinred=3;       //Red LED to pin 3
int pinblue=5;      //Blue LED to pin 5
int analogred=A0;   //analog pin to get the voltage of Red led
int redvoltage;     //variable to read the voltage of red LED
float actualvoltage; //variable to store actual voltage
int reddelay=500;    //Wait for 500ms
int bluedelay=500;   //Wait for 500ms

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinred,OUTPUT);
  pinMode(pinblue,OUTPUT);
  pinMode(analogred,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1;i<=5;i++)
  {
    analogWrite(pinred,51*i);
    delay(500);
    redvoltage=analogRead(analogred);
    Serial.println(redvoltage);
    actualvoltage=(5.*redvoltage)/1023.;
    Serial.println(actualvoltage);
    Serial.println(" ");
    if(actualvoltage>=1.5)
    {
      analogWrite(pinblue,actualvoltage*51);
    }
    else
    {
      analogWrite(pinblue,0);
    }
  }
}
