#include "devices.h"

#include "pins.h"

namespace Devices {
Ultrasonic ultrasonic(Pins::ULTRASONIC_TRIGGER_PIN,
                      Pins::ULTRASONIC_ECHO_PIN);
} // namespace Devices
