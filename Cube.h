#ifndef _CUBE_H_
#define _CUBE_H_

#include "Primitive.h"

class Point;

class Cube : public Primitive {
private:
	static primitives type;
	int r;
	Point* vertices;

public:
	Cube(Point, Point, Point, Point);
	~Cube();

	primitives getType();

};

#endif