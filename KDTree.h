#ifndef _KDTREE_H_
#define _KDTREE_H_

class KDTreeNode;
class Point;
class Primitive;

class KDTree {
private:
	KDTreeNode* root;

	void copy();
	void move();
	void destroy();

public:
	KDTree();
	KDTree(const KDTree&);
	KDTree(const KDTree&&);
	~KDTree();

	KDTree& operator= (const KDTree&);
	KDTree& operator= (const KDTree&&);	

	void insert(Point*, Primitive*);
	void remove(Point*);
	KDTreeNode* search();
};

#endif