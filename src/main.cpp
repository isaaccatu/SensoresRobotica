#include <Arduino.h>
#include <SensorDistancia.h>
#include <SensorSonido.h>
#include <SensorChoques.h>
#include <SensorMagnetico.h>

SensorDistancia SensorDistanciaCocina(2,false);
SensorSonido SensorSonidoCocina(10,false);
SensorChoques SensorChoquesCocina(13,false);
SensorMagnetico SensorMagneticoCocina(A0,3);

void setup() {
  Serial.begin(9600);
  SensorDistanciaCocina.init();
  SensorSonidoCocina.init();
  SensorChoquesCocina.init();
  SensorMagneticoCocina.init();
}

void loop() {
  Serial.print(SensorDistanciaCocina.read());
  Serial.print(SensorSonidoCocina.read());
  Serial.print(SensorChoquesCocina.read());
  Serial.print(SensorMagneticoCocina.read());
}