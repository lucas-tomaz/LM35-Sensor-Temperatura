/*
 * LM35:exemplo.
 * Autor:Lucas Tomaz 
 * Biblioteca para o controle do sensor LM35.
 */
#include <LM35.h>
LM35 sensor(A0);//Instanciação do objeto LM35.
void setup() {
  Serial.begin(9600);
}
void loop() {
float x=sensor.Celsius();//função para graus Celsius.
float y=sensor.Fahrenheit();//função para graus Fahrenheit.
float z=sensor.voltage();//função para voltagem liberada pelo sensor LM35.
Serial.println("Temperatura:"+String(x)+","+String(y)+","+String(z));//print of data temperature
}
