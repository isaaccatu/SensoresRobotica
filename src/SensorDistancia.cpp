#include <Arduino.h>
#include "SensorDistancia.h"

SensorDistancia::SensorDistancia(int Sensor, boolean detectando)
{
    this->Sensor = Sensor;
    this->detectando = detectando;

}
void SensorDistancia::init()
{
    pinMode(Sensor,INPUT);
}
int SensorDistancia::read()
{
    detectando = digitalRead(Sensor);
      while(detectando==1){
        Serial.print("Detectando");}
}