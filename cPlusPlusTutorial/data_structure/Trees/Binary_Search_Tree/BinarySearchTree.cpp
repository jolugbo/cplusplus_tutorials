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
	
	int rangeSumBST(Binary_Tree<int>* root, int low, int high) {
		vector<int>* vec = new vector<int>();
		FetchRangeInBST(root,low,high,vec);
		int sum = 0;
		for (int i = 0; i < vec->size(); i++)
		{
			sum += vec->at(i);
		}
		return sum;
	}

	void FetchRangeInBST(Binary_Tree<int>* root, int low, int high,vector<int>* vec) {
		if (root == NULL)return;
		if (root->data > high)
		{
			queue<Binary_Tree<int>*> que;
			que.push(root->leftNode);
			while (!que.empty())
			{
				Binary_Tree<int>* queTop = que.front();
				que.pop();
				if (queTop->data <= high && queTop->data >= low)
					vec->push_back(queTop->data);
				if (queTop->leftNode != NULL)
				{
					que.push(queTop->leftNode);
				}
				if (queTop->rightNode != NULL)
				{
					que.push(queTop->rightNode);
				}
			}
		}
		else if (root->data <= high)
		{
			queue<Binary_Tree<int>*> que;
			que.push(root);
			while (!que.empty())
			{
				Binary_Tree<int>* queTop = que.front();
				que.pop();
				if (queTop->data <= high && queTop->data >= low)
					vec->push_back(queTop->data);
				if (queTop->leftNode != NULL)
				{
					que.push(queTop->leftNode);
				}
				if (queTop->rightNode != NULL)
				{
					que.push(queTop->rightNode);
				}
			}
		}
	}
};

//
//[10, 5, 15, 3, 7, 13, 18, 1, null, 6]
//6

//10 5 15 3 7 13 18 1 -1 6 -1 -1 -1 -1 1 -1 -1 -1 -1 -1 -1 