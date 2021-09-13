#ifndef SensorChoques_H
#define SensorChoques_H
#include <Arduino.h>
class SensorChoques
{
    private:
    int Choques;
    int DetChoq;

    public:
        SensorChoques(int Choques, int DetChoq);
        void init();
        int read();

};

#endif        