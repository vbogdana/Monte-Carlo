#ifndef _CUBE_H_
#define _CUBE_H_

#include "Primitive.h"

class Point;

class Cube : public Primitive {
private:
	static primitives type;
	Point* vertices;

public:
	Cube(Point*);
	~Cube();

	primitives getType();
	Point* getVertex(int);

};

#endif