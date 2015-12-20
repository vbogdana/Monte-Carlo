#ifndef _KDTREENODE_H_
#define _KDTREENODE_H_

class Point;
class Primitive;

class KDTreeNode {
private:
	Point *point;
	Primitive *object;			// a primitive which is the owner of the point
	KDTreeNode *left, *right;

	void copy();
	void move();
	void destroy();

public:
	KDTreeNode(Point*, Primitive*);
	KDTreeNode(const KDTreeNode&);
	KDTreeNode(const KDTreeNode&&);
	// a destructor isn't needed because data is stored in Primitive objects

	KDTreeNode& operator=(const KDTreeNode&);
	KDTreeNode& operator=(const KDTreeNode&&);

};

#endif