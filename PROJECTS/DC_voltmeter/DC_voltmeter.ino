/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 23 September, 2017
 * Description: displays output on serial monitor and LCD, voltage range 0v to 30v DC
 *----------------------------------------------------------------------------*/

#include<LiquidCrystal.h>
#define R1 10.99
#define R2 2.2

LiquidCrystal lcd (12,11,5,4,3,2);

void setup() {
  lcd.begin(16,2);
}

void loop() {

  int vtg_A0 = analogRead(A0);   // read the input on analog pin A0
  float voltage = vtg_A0*(5.0 / 1023.0);  // Convert analog reading
  float ext_vtg=voltage*((R1+R2)/R2); // R1=10.99k (large value), R2= 2.2K(small value)
  Serial.println(ext_vtg);    // print external voltage value
  lcd.setCursor(2,0);
  lcd.print("VOLTAGE : ");
  lcd.setCursor(11,0);
  lcd.print(ext_vtg);
}
