#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int SwitchPin = 6;
int SwitchSate = 0;
int prevSwitchSate = 0;
int reply;

void setup() 
{
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);  
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("crystal ball");
  lcd.setCursor(0, 1);
  lcd.print("anything!");
}

void loop() 
{
SwitchState = digitalRead(switchPin);

  if (switchState != prevSwitchState)
  {
    if switchState == LOW)
    {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 1);

      switch(reply)
      {
        
      }
    }
    
  }

}
