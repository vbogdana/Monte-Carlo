#ifndef _PRIMITIVE_H_
#define _PRIMITIVE_H_

#define CUBE_VERTICES 8

typedef enum Primitives { SPHERE, CUBE } primitives;

class Primitive {
public:
	virtual primitives getType() = 0;
};

#endif