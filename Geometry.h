#ifndef _GEOMETRY_H_
#define _GEOMETRY_H_

#define DIMENSION 3
#define X 0
#define Y 1
#define Z 2

#define FAILURE false
#define SUCCESS true

class Point {
private:
	double coord[DIMENSION];

public:
	Point() {}
	Point(double, double, double);

	double getX();
	double getY();
	double getZ();
	double getCoord(int);

	friend bool operator==(const Point&, const Point&);
};

#endif