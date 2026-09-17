#pragma once

#include <Adafruit_BNO055.h>

class Bno055 {
public:
  explicit Bno055(uint8_t address = BNO055_ADDRESS_A);

  bool begin();
  double readOrientationX();
  double readOrientationY();
  double readOrientationZ();
  double readLinearAccelerationX();
  double readLinearAccelerationY();
  double readLinearAccelerationZ();
  double readHeading();
  int8_t readTemperatureC();

private:
  Adafruit_BNO055 m_sensor;
};
