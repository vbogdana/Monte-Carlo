#ifndef _PRIMITIVE_H_
#define _PRIMITIVE_H_

// #include "Material.h"

typedef enum Primitives { TRIANGLE, SPHERE, CUBE } primitives;
typedef enum Materials { REFLECTIVE, DIFFUSE, REFRACTIVE, GLOSSY } materials;

class Primitive {
private:
	Color color;
	materials material;
	
public:
	Primitive(Color _color, materials _material) : color(_color), material(_material) {}

	virtual primitives getType() = 0;
	Color getColor() { return color; }
	materials getMaterial() { return material; }
	
};

#endif