
#include "FooParameterization/VolumeCalculator.h"
#include <cmath>

namespace FooParameterization {

double VolumeCalculator::calculateVolume(const Sphere& sphere) {
    double radius = sphere.getRadius();
    return (4.0 / 3.0) * M_PI * std::pow(radius, 3);
}

} // namespace FooParameterization
