
#include "PCD8544.h"
 PCD8544 lcd;
void setup() {
   lcd.begin(84, 48);
}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("123456789ABCDE");
  lcd.setCursor(0, 1);
  lcd.print("2");
  lcd.setCursor(0, 2);
  lcd.print("3     KDR");
  lcd.setCursor(0, 3);
  lcd.print("4");
  lcd.setCursor(0,4);
  lcd.print("5     BYK");
   lcd.setCursor(0, 5);
  lcd.print("6");
  delay(200);
 }
