#include "KDTree.h"
#include "KDTreeNode.h"
#include "Primitive.h"
#include "Geometry.h"

KDTree::KDTree() : root(nullptr) {

}

KDTree::KDTree(const KDTree& other) {

}

KDTree::KDTree(const KDTree&& other) {

}

KDTree::~KDTree() {
	// preorder 
}

KDTree& KDTree::operator=(const KDTree& other) {

}

KDTree& KDTree::operator=(const KDTree&& other) {

}

void KDTree::insert(Point* point, Primitive* object) {

}

void KDTree::remove(Point*) {

}

KDTreeNode* KDTree::search() {

}