#include "Cube.h"
#include "Geometry.h"

primitives Cube::type = primitives::CUBE;

Cube::Cube(Point* _vertices, Color _color, materials _material) : Primitive(_color, _material) {
	vertices = new Point[CUBE_VERTICES];
	for (int i = 0; i < CUBE_VERTICES; i++)
		vertices[i] = _vertices[i];
}

Cube::~Cube() {
	delete [] vertices;
}

primitives Cube::getType() { return type; }

Point Cube::getVertex(int index) { return vertices[index]; }