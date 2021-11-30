#include <iostream>
using namespace std;
#include "../Binary _Tree/Binary_Tree.h"
class BinarySearchTree {
public:
	Binary_Tree<int>* searchBST(Binary_Tree<int>* root, int val) {
		if (root == NULL) {
			return NULL;
		}
		if (root->data == val)
			return root;
		else if (root->data > val) {
			return searchBST(root->leftNode, val);
		}
		else
			return searchBST(root->rightNode, val);
	}

	int MinValueInBST(Binary_Tree<int>* root) {
		if (root == NULL) {
			return -1;
		}
		if (root->leftNode == NULL)
			return root->data;
		else
			return MinValueInBST(root->leftNode);
	}

	int MaxValueInBST(Binary_Tree<int>* root) {
		if (root == NULL) {
			return -1;
		}
		if (root->rightNode == NULL)
			return root->data;
		else
			return MaxValueInBST(root->rightNode);
	}

};