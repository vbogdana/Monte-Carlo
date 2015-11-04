#include "Primitives.h"

class Triangle : public Primitive {
private:
	static primitives type;
public:
	Triangle();
	int getType();
};