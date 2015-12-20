#include "Geometry.h"

Point::Point(double _x, double _y, double _z) { 
	coord[X] = _x;
	coord[Y] = _y;
	coord[Z] = _z;
}

double Point::getX() { return coord[X]; }

double Point::getY() { return coord[Y]; }

double Point::getZ() { return coord[Z]; }

double Point::getCoord(int i) { return coord[i]; }

bool operator==(const Point& p1, const Point& p2) {
	for (int i = 0; i < DIMENSION; i++)
		if (p1.coord[i] != p2.coord[i])
			return false;
	return true;
}