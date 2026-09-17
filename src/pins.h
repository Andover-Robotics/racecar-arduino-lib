#pragma once

#include <Arduino.h>

namespace Pins {
constexpr uint8_t BNO055_I2C_ADDRESS = 0x28;
constexpr uint8_t LEFT_QUADRATURE_ENCODER_CHANNEL_A_PIN = 4;
constexpr uint8_t LEFT_QUADRATURE_ENCODER_CHANNEL_B_PIN = 5;
constexpr uint8_t RIGHT_QUADRATURE_ENCODER_CHANNEL_A_PIN = 6;
constexpr uint8_t RIGHT_QUADRATURE_ENCODER_CHANNEL_B_PIN = 7;
constexpr uint8_t ULTRASONIC_TRIGGER_PIN = 2;
constexpr uint8_t ULTRASONIC_ECHO_PIN = 3;
} // namespace Pins
