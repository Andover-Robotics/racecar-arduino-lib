#pragma once

#include <Arduino.h>

class AnalogReflectivity {
public:
  explicit AnalogReflectivity(uint8_t pin);

  void begin();
  int read();

private:
  const uint8_t m_pin;
};
