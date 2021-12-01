#include <iostream>
#include "../Binary _Tree/Binary_Tree.h"
using namespace std;
using namespace Btree;
class BinarySearchTree {
	//8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
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
	
	void rangeSumBST(Binary_Tree<int>* root, int low, int high) {
		vector<int>* vec = new vector<int>();
		FetchRangeInBST(root,low,high,vec);
		for (int i = 0; i < vec->size(); i++)
		{
			cout << vec->at(i);
		}
	}

	void FetchRangeInBST(Binary_Tree<int>* root, int low, int high,vector<int>* vec) {
		if (root == NULL)return;
		if (root->data > high)
		{
			while (root->leftNode != NULL)
			{
				root = root->leftNode;
				if (root->data >= low)
				{
					vec->push_back(root->data);
				}
			}
		}
		else if (root->data < high)
		{
			while (root->rightNode != NULL)
			{
				root = root->rightNode;
				if (root->data >= low)
				{
					vec->push_back(root->data);
				}
			}
		}
	}
};