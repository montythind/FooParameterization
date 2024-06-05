
#include <iostream>
#include "FooParameterization/Sphere.h"
#include "FooParameterization/VolumeCalculator.h"

int main() {
    FooParameterization::Sphere sphere(5.0);
    double volume = FooParameterization::VolumeCalculator::calculateVolume(sphere);

    std::cout << "Volume of the sphere with radius " << sphere.getRadius() << " is " << volume << std::endl;

    return 0;
}
