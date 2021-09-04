#include <Arduino.h>
#include <SensorDistancia.h>

SensorDistancia SensorDistanciaCocina(2,false);

void setup() {
  SensorDistancia.init();
}

void loop() {
  Serial.print(SensorDistanciaCocina.read());
}