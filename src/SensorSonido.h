#ifndef SensorSonido_H
#define SensorSonido_H
#include <Arduino.h>
class SensorSonido
{
    private:
    int Sonido;
    int Valor;

    public:
        SensorSonido(int Sonido, int Valor );
        void init();
        int read();


};

#endif