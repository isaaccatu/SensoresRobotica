#include <Arduino.h>
#include "SensorSonido.h"
SensorSonido::SensorSonido(int Sonido, int Valor)
{
    this->Sonido = Sonido;
    this->Valor = Valor;
}
void SensorSonido::init()
{
    pinMode(Sonido,INPUT);
}
int SensorSonido::read()
{
    Valor = digitalRead(Sonido);
      if(Valor==HIGH)
      {
        Serial.print("Detectando Sonido ");
        Serial.println();
        delay(500);
        }
        else{
            Serial.print("No detecta Sonido ");
            Serial.println();
            delay(500);
        }
        return (Valor);
        
}