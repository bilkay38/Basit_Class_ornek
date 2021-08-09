#include "Arduino.h"
#include"led.h"

 led::led(int pin)
 {
  
   pinMode(pin,OUTPUT); 
   _pin=pin;
 }
  String led:: yazdir()
  {
    return ali;
    
  }
  void led::start()
  {
     digitalWrite(_pin,HIGH);
  }
  void led:: stop()
  {
    digitalWrite(_pin,LOW);
  }
  
