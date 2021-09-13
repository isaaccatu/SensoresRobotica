#include <Arduino.h>
#include "Sensormagnetico.h"
SensorMagnetico::SensorMagnetico(int Analog_Eingang, int Digital_Eingang)
{
    this->Analog_Eingang = Analog_Eingang ;
    this->Digital_Eingang = Digital_Eingang ;
}
void SensorMagnetico::init()
{
    pinMode (Analog_Eingang, INPUT);
    pinMode (Digital_Eingang, INPUT);
}
int SensorMagnetico::read()
{
    float Analog;
    int Digital;

    Analog = analogRead (Analog_Eingang) * (5.0 / 1023.0);
    Digital = digitalRead (Digital_Eingang);
    Serial.print ("Analog voltage value:  "); 
    Serial.print (Analog, 4); 
    Serial.print ("Voltage, ");
    Serial.print ("Extreme voltage value:  ");

     if(Digital==1)
    {
    Serial.println ("Voltage reached");
    }
    else
    {
    Serial.println ("Voltage not reached yet");
    }
    Serial.println ("Waiting to reach voltage");
    delay (500);
    return (Analog);
}