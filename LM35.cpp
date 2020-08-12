#include "Arduino.h"
#include "LM35.h"
LM35::LM35(int pin){
	pinMode(_pin,INPUT);
	_pin=pin;
}
float LM35::Celsius(){
float tensao=0.0;
float temperatura=0.0;
tensao=(float(analogRead(_pin))*5)/1023;
temperatura=(tensao)/0.01;
return temperatura;
}
float LM35::voltage(){
float tensao=0.0;
tensao=(float(analogRead(_pin))*5)/1023;
return tensao;
}
float LM35::Fahrenheit(){
float result=(voltage()*1.8)+32;
return result;
}