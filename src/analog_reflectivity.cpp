#include "analog_reflectivity.h"

AnalogReflectivity::AnalogReflectivity(uint8_t pin) : m_pin(pin) {}

void AnalogReflectivity::begin() { pinMode(m_pin, INPUT); }

int AnalogReflectivity::read() { return analogRead(m_pin); }
