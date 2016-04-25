#include <Thermistor.h>

Thermistor temp(0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int temperature = int(temp.getTemp());
  
  Serial.println(temperature);
  delay(1000);
}
