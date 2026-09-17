#include "devices.h"

#include "pins.h"

namespace Devices {
Bno055 bno055(Pins::BNO055_I2C_ADDRESS);
QuadratureEncoder leftQuadratureEncoder(
    Pins::LEFT_QUADRATURE_ENCODER_CHANNEL_A_PIN,
    Pins::LEFT_QUADRATURE_ENCODER_CHANNEL_B_PIN);
QuadratureEncoder rightQuadratureEncoder(
    Pins::RIGHT_QUADRATURE_ENCODER_CHANNEL_A_PIN,
    Pins::RIGHT_QUADRATURE_ENCODER_CHANNEL_B_PIN);
Ultrasonic ultrasonic(Pins::ULTRASONIC_TRIGGER_PIN,
                      Pins::ULTRASONIC_ECHO_PIN);
} // namespace Devices
