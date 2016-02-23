#include "Geometry.h"

Vector::Vector() {
	coord[X] = 0;
	coord[Y] = 0;
	coord[Z] = 0;
}

Vector::Vector(double _x, double _y, double _z) { 
	coord[X] = _x;
	coord[Y] = _y;
	coord[Z] = _z;
}

double Vector::getX() { return coord[X]; }

double Vector::getY() { return coord[Y]; }

double Vector::getZ() { return coord[Z]; }

double Vector::operator[](int i) { return coord[i]; }

Vector Vector::operator+(const Vector& vec) { return Vector(coord[X] + vec.coord[X], coord[Y] + vec.coord[Y], coord[Z] + vec.coord[Z]); }

Vector Vector::operator-(const Vector& vec) { return Vector(coord[X] - vec.coord[X], coord[Y] - vec.coord[Y], coord[Z] - vec.coord[Z]); }

Vector Vector::operator*(const Vector& vec) { return Vector(coord[X] * vec.coord[X], coord[Y] * vec.coord[Y], coord[Z] * vec.coord[Z]); }

Vector Vector::operator*(const int c) { return Vector(coord[X] * c, coord[Y] * c, coord[Z] * c); }

bool Vector::operator==(const Vector& vec) {
	if (coord[X] != vec.coord[X])
		return false;
	else if (coord[Y] != vec.coord[Y])
		return false;
	else if (coord[Z] != vec.coord[Z])
		return false;
	else
		return true;
}

/* COLOR */

Color::Color(double red, double green, double blue) : Vector(red, green, blue) {}

double Color::getRed() { return getX(); }
double Color::getGreen() { return getY(); }
double Color::getBlue() { return getZ(); }