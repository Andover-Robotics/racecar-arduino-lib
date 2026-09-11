#include "ultrasonic.h"

Ultrasonic::Ultrasonic(uint8_t triggerPin, uint8_t echoPin)
    : m_triggerPin(triggerPin), m_echoPin(echoPin) {}

void Ultrasonic::begin() {
  pinMode(m_triggerPin, OUTPUT);
  pinMode(m_echoPin, INPUT);
  digitalWrite(m_triggerPin, LOW);
}

float Ultrasonic::readDistanceCm(uint32_t timeoutMicros) {
  digitalWrite(m_triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(m_triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(m_triggerPin, LOW);

  const uint32_t echoDuration = pulseIn(m_echoPin, HIGH, timeoutMicros);
  return echoDuration * 0.0343F / 2.0F;
}
