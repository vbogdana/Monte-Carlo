#ifndef _SPHERE_H_
#define _SPHERE_H_

#include "Primitive.h"

class Point;

class Sphere : public Primitive {
private:
	static primitives type;
	double r;
	Point center;

public:
	Sphere(double, Point, Color, materials);
	primitives getType();
	double getR();
	Point getCenter();

};

#endif