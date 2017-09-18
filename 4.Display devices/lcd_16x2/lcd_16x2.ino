/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 18 September, 2017
 * Description: lcd in 4 bit mode
 *----------------------------------------------------------------------------*/

#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // RS, E, D4-D7

void setup()
{
 lcd.begin(16, 2);  // initializes the 16x2 LCD
}

void loop()
{
  lcd.setCursor(1,0);           // column 1, line 1
  lcd.print("LCD 4-bit mode");
  lcd.setCursor(4,1);           // column 4, line 2
  lcd.print("ARDUINO");
}