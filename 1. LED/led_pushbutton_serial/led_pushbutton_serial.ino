/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 16 June, 2017
 * Description: Digital Read with Button and view on serial monitor
 *----------------------------------------------------------------------------*/


int pushButton =7; //digital pin 7 has a push button attached to it. Give it an name

void setup() {

  Serial.begin(9600); //initialize serial comm. at 9600 bits per second
  pinMode(LED_BUILTIN,OUTPUT); // see output at built in led
  pinMode(pushButton, INPUT); //make the push button's pin as input
}

void loop() {

int buttonState = digitalRead(pushButton); //read the input pin

Serial.println(buttonState); //print out the state of the button  

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




