#include "Arduino.h"
#include "dtmfgen.h"
  
DTMFGenerator dtmf;

#define BUTTON_1 A4
#define BUTTON_2 A3
  
void setup()
{
    pinMode(BUTTON_1, INPUT);
    pinMode(BUTTON_2, INPUT);
}
  
void loop()
{
 if(digitalRead(BUTTON_1)){
    dtmf.generate('5', 3000);
 }
 
 if(digitalRead(BUTTON_2)){
    dtmf.generate('7', 3000);
 }
}
