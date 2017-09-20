/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 20 September, 2017
 * Description: lcd custom characters
 *----------------------------------------------------------------------------*/
 
 #include  <LiquidCrystal.h>
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
// smile
byte smile[8] = {
  B00000,
  B00000,
  B01010,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000
};
 
// degree fahrenheit
byte newChar2[8] = {
  B01000,
  B10100,
  B01000,
  B00011,
  B00100,
  B00111,
  B00100,
  B00000
};
 
// arrow right
byte newChar3[8] = {
  B00000,
  B00100,
  B00010,
  B11111,
  B00010,
  B00100,
  B00000,
  B00000
};
 
// arrow left
byte newChar4[8] = {
  B00000,
  B00100,
  B01000,
  B11111,
  B01000,
  B00100,
  B00000,
  B00000
};
 
// phi
byte newChar5[8] = {
  B00000,
  B01101,
  B10010,
  B10101,
  B01001,
  B10110,
  B00000,
  B00000
};
 
// boldface "h"
byte newChar6[8] = {
  B11000,
  B11000,
  B11110,
  B11111,
  B11011,
  B11011,
  B11011,
  B00000
};
 
// degree centigrade
byte newChar7[8] = {
  B01000,
  B10100,
  B01000,
  B00011,
  B00100,
  B00100,
  B00011,
  B00000
};
 
// micro sign
byte newChar8[8] = {
  B00000,
  B00000,
  B00000,
  B10010,
  B10010,
  B10010,
  B11100,
  B10000
};
 
int i = 0;
 
void setup() {
  lcd.createChar(0, smile);
  lcd.createChar(1, newChar2);
  lcd.createChar(2, newChar3);
  lcd.createChar(3, newChar4);
  lcd.createChar(4, newChar5);
  lcd.createChar(5, newChar6);
  lcd.createChar(6, newChar7);
  lcd.createChar(7, newChar8);
  lcd.begin(16, 2);
 
  for(int n = 0; n < 8; n++)
  {
    lcd.setCursor(n*2,0);
    lcd.write(n);
  }
}
 
void loop() {
 
}
