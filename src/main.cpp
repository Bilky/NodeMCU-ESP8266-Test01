#include <Arduino.h>

#include "Bilk_data.h"
#include "Bilk_secrets.h"

void setup() {
  // Monitor auf Std. Baudrate "SERIAL_BAUD"
  Serial.begin(SERIAL_BAUD);
  delay(50);
  Serial.println();
  Serial.println(F("Setup NodeMCU 1.0 Test! Start"));


  Serial.println(F("Setup NodeMCU 1.0 Test! Ende"));
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(F("Loop NodeMCU 1.0 Test! Start"));


  Serial.println(F("Loop NodeMCU 1.0 Test! Ende"));
}

