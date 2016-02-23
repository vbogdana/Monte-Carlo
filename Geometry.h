#ifndef _GEOMETRY_H_
#define _GEOMETRY_H_

#define DIMENSION 3
#define X 0
#define Y 1
#define Z 2

#define FAILURE false
#define SUCCESS true

class Vector {
private:
	double coord[DIMENSION];

public:
	Vector();
	Vector(double, double, double);

	double getX();
	double getY();
	double getZ();

	double operator[](int);	
	Vector operator+(const Vector&);
	Vector operator-(const Vector&);
	Vector operator*(const Vector&);
	Vector operator*(const int);
	bool operator==(const Vector&);
};

typedef Vector Point;

class Color : public Vector {
public:
	Color(double, double, double);

	double getRed();
	double getGreen();
	double getBlue();
};

#endif