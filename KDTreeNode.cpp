#include "KDTreeNode.h"
#include "Geometry.h"

KDTreeNode::KDTreeNode(Point* _point, Primitive* _object) {
	point = _point;
	object = _object;
	left = right = nullptr;
}

/*
KDTreeNode::KDTreeNode(const KDTreeNode& other) {

}

KDTreeNode::KDTreeNode(KDTreeNode&& other) {

}

KDTreeNode& KDTreeNode::operator=(const KDTreeNode& other) {

}

KDTreeNode& KDTreeNode::operator=(KDTreeNode&& other) {

}
*/

bool operator==(const KDTreeNode& n1, const KDTreeNode& n2) {
	return (*n1.point == *n2.point);
}