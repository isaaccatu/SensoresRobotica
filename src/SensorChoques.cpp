#include <Arduino.h>
#include "SensorChoques.h"
SensorChoques::SensorChoques(int Choques, int DetChoq)
{
    this->Choques = Choques;
    this->DetChoq = DetChoq;
}
void SensorChoques::init()
{
    pinMode(Choques,INPUT);
}
int SensorChoques::read()
{
    DetChoq = digitalRead (Choques);
    if(DetChoq==HIGH){
        Serial.print("Detectando Choque");
        Serial.println();
        delay(5000);
    }
    else
    {
        Serial.print("No detecta Choque");
        Serial.println();
        delay(10000);
    } return (Choques);
}