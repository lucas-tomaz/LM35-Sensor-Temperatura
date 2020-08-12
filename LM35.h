#ifndef LM35_h
#define LM35_h
#include "Arduino.h"

class LM35{
public:
   LM35(int pin);
   float Celsius();
   float Fahrenheit();
   float voltage();
private:
   int _pin;
};
#endif