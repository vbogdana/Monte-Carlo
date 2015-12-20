#include "Sphere.h"
#include "Geometry.h"

primitives Sphere::type = primitives::SPHERE;

Sphere::Sphere(int _r, Point _center) : r(_r), center(_center) {

}

primitives Sphere::getType() { return type; }