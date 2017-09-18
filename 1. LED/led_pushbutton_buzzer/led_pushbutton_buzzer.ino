/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 15 June, 2017
 * Description: activate buzzer on button press
 *----------------------------------------------------------------------------*/


int pushButton =7;

void setup() {

  pinMode(LED_BUILTIN,OUTPUT); // see output at built in led and buzzer
  pinMode(pushButton, INPUT); //make the push button's pin as input
}

void loop() {

int buttonState = digitalRead(pushButton); //read the input pin

if(buttonState)
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1); //delay in between reads for stability
}
else
{
  digitalWrite(LED_BUILTIN,LOW);
  delay(1); //delay in between reads for stability
}
}
