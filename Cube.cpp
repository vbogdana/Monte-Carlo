#include "Cube.h"
#include "Geometry.h"

primitives Cube::type = primitives::CUBE;

Cube::Cube(Point p1, Point p2, Point p3, Point p4) {
	vertices = new Point[CUBE_VERTICES];
	vertices[0] = p1;
	vertices[1] = p2;
	vertices[2] = p3;
	vertices[3] = p4;
}

Cube::~Cube() {
	delete [] vertices;
}

primitives Cube::getType() { return type; }