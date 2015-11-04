
typedef enum Primitives { TRIANGLE, SPHERE, CUBE } primitives;

class Primitive {
public:
	virtual int getType() = 0;
};