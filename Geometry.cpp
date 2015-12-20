#include "Geometry.h"

Point::Point(double _x, double _y, double _z) : x(_x), y(_y), z(_z) { }

double Point::getX() { return x; }

double Point::getY() { return y; }

double Point::getZ() { return z; }