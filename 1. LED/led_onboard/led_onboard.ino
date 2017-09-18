/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 14 June, 2017
 * Description: activate built in LED
 *----------------------------------------------------------------------------*/


void setup() {
  pinMode(LED_BUILTIN,OUTPUT); // see output at built in led and buzzer
}

void loop() {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(500); //delay in between reads for stability
  digitalWrite(LED_BUILTIN,LOW);
  delay(500); //delay in between reads for stability
}
