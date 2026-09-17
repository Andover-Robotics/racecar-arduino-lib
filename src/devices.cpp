#include "devices.h"

#include "pins.h"

namespace Devices {
Bno055 bno055(Pins::BNO055_I2C_ADDRESS);
Ultrasonic ultrasonic(Pins::ULTRASONIC_TRIGGER_PIN,
                      Pins::ULTRASONIC_ECHO_PIN);
} // namespace Devices
