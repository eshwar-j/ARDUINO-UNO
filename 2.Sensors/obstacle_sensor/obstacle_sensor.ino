/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 17 September, 2017
 * Description: activate buzzer on button press
 *----------------------------------------------------------------------------*/


int IRsense =7; // IR sensor at pin 7, active low
int buzzer =12; // buzzer at pin 12

void setup() 
{
  pinMode(IRsense, INPUT); //make the push button's pin as input
  pinMode(buzzer,OUTPUT); // see output at buzzer
}

void loop() 
{
int IRmonitor = digitalRead(IRsense); //read the input pin

if(IRmonitor)
  digitalWrite(buzzer,LOW);
else
  digitalWrite(buzzer,HIGH);
}
