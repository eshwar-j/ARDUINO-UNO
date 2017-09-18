/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 18 September, 2017
 * Description: lcd displaying object count
 *----------------------------------------------------------------------------*/

#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // RS, E, D4-D7

int count=0;

void setup()
{
 pinMode(LED_BUILTIN,OUTPUT);   // connect buzzer here to sound the output
 lcd.begin(16, 2);  // initializes the 16x2 LCD
 lcd.setCursor(0,1);
 lcd.print("OBJECT COUNT : ");
}

void loop() {
  int sense = digitalRead(7); // connect obstacle sensor to digital pin 7

  if(!sense)
  {
    digitalWrite(LED_BUILTIN,HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN,LOW);
    count++;
  }
  lcd.setCursor(14,1);
  lcd.print(count);
  delay(100);
}
