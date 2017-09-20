/*----------------------------------------------------------------------------
   Author: Eshwar jorvekar
   Created on 21 September, 2017
   Description: displays output on serial monitor
  ----------------------------------------------------------------------------*/

void setup() {
  Serial.begin(9600);
}
void loop() {
  int ldr = analogRead(A0);
  Serial.print(ldr); 	// lcd.print(ldr); for seeing result on lcd
  delay(100);
}
