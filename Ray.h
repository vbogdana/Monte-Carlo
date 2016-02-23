#ifndef _RAY_H_
#define _RAY_H_

class Vector;

class Ray {
private:
	Point origin;
	Vector direction;

public:
	Ray(Point , Vector );

	Point getOrigin();
	Vector getDirection();
};

#endif