#include "KDTree.h"
#include "KDTreeNode.h"
#include "Primitive.h"
#include "Geometry.h"

KDTree::KDTree() : root(nullptr) {

}

/*
KDTree::KDTree(const KDTree& other) {
	// preorder + insert
}

KDTree::KDTree(KDTree&& other) {
	root = other.root;
	other.root = nullptr;
}
*/

KDTree::~KDTree() {
	// preorder 
}

/*
KDTree& KDTree::operator=(const KDTree& other) {

}

KDTree& KDTree::operator=(KDTree&& other) {
	root = other.root;
	other.root = nullptr;
}
*/

bool KDTree::insert(Point* point, Primitive* object) {
	int depth = 0, index = 0, direction = 0;
	KDTreeNode* curr = root, *father = nullptr;

	while (curr) {
		if (*curr->point == *point)
			return FAILURE;				// maybe just add a primitive to the array of owners

		calculateSplit(index, depth);
		depth++;

		father = curr;
		if (curr->point->getCoord(index) <= point->getCoord(index)) {
			direction = LEFT;		// go left
			curr = curr->left;
		}
		else {
			direction = RIGHT;		// go right
			curr = curr->right;
		}		
	}

	if (father == nullptr)
		root = new KDTreeNode(point, object);
	else
		(direction == LEFT ? father->left : father->right) = new KDTreeNode(point, object);

	return SUCCESS;
}

KDTreeNode* KDTree::search(Point* point) {
	int depth = 0, index = 0, direction = 0;
	KDTreeNode* curr = root;

	while (curr) {
		if (*curr->point == *point)
			return curr;

		calculateSplit(index, depth);
		depth++;

		if (curr->point->getCoord(index) <= point->getCoord(index)) {
			direction = LEFT;		// go left
			curr = curr->left;
		}
		else {
			direction = RIGHT;		// go right
			curr = curr->right;
		}
	}

	return nullptr;
}

void KDTree::remove(Point*) {

}