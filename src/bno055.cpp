#include "bno055.h"

Bno055::Bno055(uint8_t address) : m_sensor(-1, address) {}

bool Bno055::begin() {
  if (!m_sensor.begin()) {
    return false;
  }

  delay(1000);
  m_sensor.setExtCrystalUse(true);
  return true;
}

double Bno055::readOrientationX() {
  return m_sensor.getVector(Adafruit_BNO055::VECTOR_EULER).x();
}

double Bno055::readOrientationY() {
  return m_sensor.getVector(Adafruit_BNO055::VECTOR_EULER).y();
}

double Bno055::readOrientationZ() {
  return m_sensor.getVector(Adafruit_BNO055::VECTOR_EULER).z();
}

double Bno055::readLinearAccelerationX() {
  return m_sensor.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL).x();
}

double Bno055::readLinearAccelerationY() {
  return m_sensor.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL).y();
}

double Bno055::readLinearAccelerationZ() {
  return m_sensor.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL).z();
}

double Bno055::readHeading() { return readOrientationX(); }

int8_t Bno055::readTemperatureC() { return m_sensor.getTemp(); }
