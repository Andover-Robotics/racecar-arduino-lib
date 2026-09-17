#pragma once

#include "analog_reflectivity.h"
#include "bno055.h"
#include "quadrature_encoder.h"
#include "ultrasonic.h"

namespace Devices {
extern AnalogReflectivity leftAnalogReflectivity;
extern AnalogReflectivity rightAnalogReflectivity;
extern Bno055 bno055;
extern QuadratureEncoder leftQuadratureEncoder;
extern QuadratureEncoder rightQuadratureEncoder;
extern Ultrasonic ultrasonic;
} // namespace Devices
