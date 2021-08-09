#ifndef led_h
#define led_h
#include "Arduino.h"


class led
{  

  public:
   led(int pin);
  
   void start();
   void stop();
   String yazdir();

 private:
   int _pin;
   String ali="nehaber";

  
};
#endif
