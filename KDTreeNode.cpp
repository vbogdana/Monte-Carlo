#include "KDTreeNode.h"
#include "Geometry.h"

KDTreeNode::KDTreeNode(Point* _point, Primitive* _object) {
	point = _point;
	object = _object;
	left = right = nullptr;
}

KDTreeNode::KDTreeNode(const KDTreeNode& other) {

}

KDTreeNode::KDTreeNode(const KDTreeNode&& other) {

}

KDTreeNode& KDTreeNode::operator=(const KDTreeNode& other) {

}

KDTreeNode& KDTreeNode::operator=(const KDTreeNode&& other) {

}