#ifndef SensorMagnetico_H
#define SensorMagnetico_H
#include <Arduino.h>
class SensorMagnetico
{
    private:
    int Analog_Eingang;
    int Digital_Eingang;

    public:
     SensorMagnetico(int Analog_Eingang, int Digital_Eingang);
        void init();
        int read();


};

#endif
