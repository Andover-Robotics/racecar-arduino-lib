#pragma once

#include <Arduino.h>

class Ultrasonic {
public:
  Ultrasonic(uint8_t triggerPin, uint8_t echoPin);

  void begin();
  float readDistanceCm(uint32_t timeoutMicros = 30000);

private:
  const uint8_t m_triggerPin;
  const uint8_t m_echoPin;
};
