int redpin=9;           //pin for Red LED
int greenpin=10;         //pin for Green LED
int bluepin=11;          //pin for Blue LED 
int brightness=255;     //setv the brightness of LED

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1;i<=3;i++)
  { 
    if(i==1)
    {
      analogWrite(redpin,brightness);
      analogWrite(greenpin,0);
      analogWrite(bluepin,0);
      delay(500);
      Serial.println("Red LEd is glowing");
      delay(500);
    }
    else if(i==2)
    {
      analogWrite(greenpin,brightness);
      analogWrite(redpin,0);
      analogWrite(bluepin,0);
      delay(500);
      Serial.println("Green LED is blinking");
      delay(500); 
    }
    else
    {
      analogWrite(bluepin,brightness);
      analogWrite(greenpin,0);
      analogWrite(redpin,0);
      delay(500);
      Serial.println("Blue LED is blinking");
      delay(500); 
    }
  }
}
