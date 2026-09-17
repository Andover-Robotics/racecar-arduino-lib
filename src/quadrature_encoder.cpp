#include "quadrature_encoder.h"

QuadratureEncoder::QuadratureEncoder(uint8_t channelAPin, uint8_t channelBPin)
    : m_encoder(channelAPin, channelBPin) {}

void QuadratureEncoder::begin(int32_t initialCount) { setCount(initialCount); }

int32_t QuadratureEncoder::readCount() {
  return static_cast<int32_t>(m_encoder.read());
}

void QuadratureEncoder::setCount(int32_t count) { m_encoder.write(count); }

void QuadratureEncoder::reset() { setCount(0); }
