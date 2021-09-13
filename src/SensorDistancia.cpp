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
      if(detectando==1)
      {
        Serial.print("Detectando algo en la distancia ");
        Serial.println();
        delay(500);
        }
        else{
            Serial.print("No detecto nada en la distancia ");
            Serial.println();
            delay(500);
        }
        
}