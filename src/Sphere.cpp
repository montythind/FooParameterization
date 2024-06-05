
#include "FooParameterization/Sphere.h"

namespace FooParameterization {

Sphere::Sphere(double radius) : radius(radius) {}

double Sphere::getRadius() const {
    return radius;
}

void Sphere::setRadius(double radius) {
    this->radius = radius;
}

} // namespace FooParameterization
