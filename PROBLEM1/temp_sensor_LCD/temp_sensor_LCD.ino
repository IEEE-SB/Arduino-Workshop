#include <LiquidCrystal.h>
int temp;
int tempPin = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("TEMPERATURE= ");
}

void loop()
{
  lcd.setCursor(0, 1);
  temp = analogRead(tempPin);
  temp = temp * 0.48828125;
  lcd.print(temp);
  lcd.print("C");
   
 delay(100);
  
}
