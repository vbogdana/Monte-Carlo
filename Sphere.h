#ifndef _SPHERE_H_
#define _SPHERE_H_

#include "Primitive.h"

class Point;

class Sphere : public Primitive {
private:
	static primitives type;
	int r;
	Point center;

public:
	Sphere(int, Point);
	primitives getType();

};

#endif