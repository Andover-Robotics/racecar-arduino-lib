#pragma once

#include "bno055.h"
#include "quadrature_encoder.h"
#include "ultrasonic.h"

namespace Devices {
extern Bno055 bno055;
extern QuadratureEncoder leftQuadratureEncoder;
extern QuadratureEncoder rightQuadratureEncoder;
extern Ultrasonic ultrasonic;
} // namespace Devices
