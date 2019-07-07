#include<LiquidCrystal.h>

LiquidCrystal mylcd(10,9,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  mylcd.begin(16,2);
  mylcd.setCursor(0,0);
  mylcd.print("My Timer: ");
  //mylcd.setCursor(0,1);
  //mylcd.print("SHUBHAM HERE");
}

void loop() {
  // put your main code here, to run repeatedly:
  //int i=1;
  for(int i=1;i<=10;i++)
  {
    mylcd.setCursor(0,1);
    mylcd.print("                ");
    mylcd.setCursor(0,1);
    mylcd.print(i);
    if(i==1)
      mylcd.print(" second");
    else
      mylcd.print(" seconds");
    delay(1000);
  }
  for(int j=10;j>=1;j--)
  {
    mylcd.setCursor(0,1);
    mylcd.print("                ");
    mylcd.setCursor(0,1);
    mylcd.print(j);
    if(j>=2)
      mylcd.print(" seconds");
    else
      mylcd.print(" second");
    delay(1000);
  }
}
