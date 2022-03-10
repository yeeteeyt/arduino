
#include <LiquidCrystal.h>
LiquidCrystal lcd(//your pins here

);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
 
  lcd.setCursor(0, 1);
  lcd.print("This is a sign");
  delay(1000);
  lcd.clear();
  lcd.print("This is a different");
}
