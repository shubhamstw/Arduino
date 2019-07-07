int ledno1=3;
int ledno2=6;
int ontime1=500;
int offtime1=500;
int ontime2=500;
int offtime2=500;
int blinkno1=5;
int blinkno2=5; 
String bluemessage="Blue lED is blinking";
String greenmessage="Green LED is blinking";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledno1,OUTPUT);
  pinMode(ledno2,OUTPUT);

  /*Serial.println("Enter the no. of times you want to blink blue LED");
  while(Serial.available()==0){}
  blinkno1=Serial.parseInt();
  delay(500);*/
  
  /*Serial.println("Enter the no.of times you want to blink green LED");
  while(Serial.available()==0){}
  delay(500);
  blinkno2=Serial.parseInt();*/
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println(" ");
  Serial.println(bluemessage);
  int i=1;
  while(i<=blinkno1)
  {
    Serial.print("You are at blink no ");
    Serial.println(i);
    analogWrite(ledno1,51*i);
    delay(ontime1);       
    i++;
  }
  delay(ontime1);
  analogWrite(ledno1,0);

  Serial.println(" ");
  Serial.println(greenmessage);
  int j=1;
  while(j<=blinkno2)
  {
    Serial.print("You are at print no ");
    Serial.println(j);
    analogWrite(ledno2,51*j);
    delay(ontime2);
    j++;
  }
  delay(ontime2);
  analogWrite(ledno2,0);
  
}
