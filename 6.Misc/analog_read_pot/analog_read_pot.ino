/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 20 September, 2017
 * Description: displays output on serial monitor
 *----------------------------------------------------------------------------*/

void setup() { 
  Serial.begin(9600);
}
void loop() {
  int pot = analogRead(A0);
  Serial.print(pot); 	// lcd.print(pot); for seeing result on lcd
  delay(100);
}
