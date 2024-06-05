
#ifndef FOOPARAMETERIZATION_VOLUMECALCULATOR_H
#define FOOPARAMETERIZATION_VOLUMECALCULATOR_H

#include "Sphere.h"

namespace FooParameterization {

class VolumeCalculator {
public:
    static double calculateVolume(const Sphere& sphere);
};

} // namespace FooParameterization

#endif // FOOPARAMETERIZATION_VOLUMECALCULATOR_H
