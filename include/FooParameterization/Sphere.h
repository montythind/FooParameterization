
#ifndef FOOPARAMETERIZATION_SPHERE_H
#define FOOPARAMETERIZATION_SPHERE_H

namespace FooParameterization {

class Sphere {
public:
    explicit Sphere(double radius);
    double getRadius() const;
    void setRadius(double radius);

private:
    double radius;
};

} // namespace FooParameterization

#endif // FOOPARAMETERIZATION_SPHERE_H
