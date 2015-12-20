#ifndef _MATERIAL_H_
#define _MATERIAL_H_

typedef enum Materials { REFLECTIVE, DIFFUSE, REFRACTIVE } materials;

class Material {
private:
	materials type;

public:
	Material(materials _type);

};

#endif