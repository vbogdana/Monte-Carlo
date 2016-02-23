#ifndef _CUBE_H_
#define _CUBE_H_

#include "Primitive.h"

#define CUBE_VERTICES 8

class Point;

class Cube : public Primitive {
private:
	static primitives type;
	Point* vertices;

public:
	Cube(Point*, Color, materials);
	~Cube();

	primitives getType();
	Point getVertex(int);

};

#endif