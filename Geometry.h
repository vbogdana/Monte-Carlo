#ifndef _GEOMETRY_H_
#define _GEOMETRY_H_

class Point {
private:
	double x, y, z;

public:
	Point() {}
	Point(double, double, double);

	double getX();
	double getY();
	double getZ();
};

#endif