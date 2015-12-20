#ifndef _KDTREE_H_
#define _KDTREE_H_

#define calculateSplit(i, d) i = d % 3
enum Direction { LEFT, RIGHT };

class KDTreeNode;
class Point;
class Primitive;

class KDTree {
private:
	KDTreeNode* root;

	/*
	void copy(const KDTree&);
	void move(const KDTree&&);
	void destroy();
	*/

public:
	KDTree();
	//KDTree(const KDTree&);
	//KDTree(KDTree&&);
	~KDTree();

	//KDTree& operator= (const KDTree&);
	//KDTree& operator= (KDTree&&);	

	bool insert(Point*, Primitive*);
	KDTreeNode* search(Point*);
	void remove(Point*);

};

#endif