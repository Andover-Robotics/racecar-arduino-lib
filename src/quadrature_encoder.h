#pragma once

#include <Arduino.h>
#include <Encoder.h>

class QuadratureEncoder {
public:
  QuadratureEncoder(uint8_t channelAPin, uint8_t channelBPin);

  void begin(int32_t initialCount = 0);
  int32_t readCount();
  void setCount(int32_t count);
  void reset();

private:
  Encoder m_encoder;
};
