int ledno1=12;
int ledno2=10;



void setup() {
  // put your setup code here, to run once:
 Serial.begin(74880);
 pinMode(ledno1,OUTPUT);
 pinMode(ledno2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Red LED is blinking:");
  for(int i=1;i<=5;i++)
  {
    Serial.print("Blinking no :");
    Serial.println(i);
    digitalWrite(ledno1,HIGH);
    delay(500);
    digitalWrite(ledno1,LOW);
    delay(500);
  }
  Serial.println("Yellow LED is blinking");
  Serial.println("");
  digitalWrite(ledno2,HIGH);
  delay(500);
  digitalWrite(ledno2,LOW);
  delay(500);
}
