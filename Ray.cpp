#include "Geometry.h"
#include "Ray.h"

Ray::Ray(Point _origin, Vector _direction) : origin(_origin), direction(_direction) { }

Point Ray::getOrigin() { return origin; }

Vector Ray::getDirection() { return direction; }