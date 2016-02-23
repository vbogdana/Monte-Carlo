#include "Sphere.h"
#include "Geometry.h"

primitives Sphere::type = primitives::SPHERE;

Sphere::Sphere(double _r, Point _center, Color _color, materials _material) : Primitive(_color, _material), r(_r), center(_center) { }

primitives Sphere::getType() { return type; }

double Sphere::getR() { return r; }

Point Sphere::getCenter() { return center; }