#include <Arduino.h>

#include "common_data.h"

/* various secret data: SECRET_SSID, SECRET_PASS, ...  */
#include "Bilk_secrets.h"  
//#include "common_secrets.h"  

// don't forget to change this to real ssid/password
// or set these in common_secrets.h and include it
#ifndef SECRET_SSID
#define SECRET_SSID "Change to your WiFi SSID"
#define SECRET_PASS "Change to your WiFi Password"
#endif

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

  delay(5000);
  Serial.println(F("Loop NodeMCU 1.0 Test! Ende"));
}

