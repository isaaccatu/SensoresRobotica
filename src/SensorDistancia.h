#ifndef SensorDistancia_H
#define SensorDistancia_H
#include <Arduino.h>
class SensorDistancia
{
private:
    int Sensor;
    boolean detectando;

public:
    SensorDistancia(int Sensor, boolean detectando);
    void init();
    int read();
    

};

#endif