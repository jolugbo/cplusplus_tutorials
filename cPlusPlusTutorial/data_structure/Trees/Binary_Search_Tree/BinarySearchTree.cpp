#include <iostream>
#include "../Binary _Tree/Binary_Tree.h"
using namespace std;
using namespace Btree;
class BinarySearchTree {
	//8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
private:
	Binary_Tree<int>* root;
public:
	BinarySearchTree() {
		root = NULL;
	}
	~BinarySearchTree() {
		delete root;
	}
	Binary_Tree<int>* insert(Binary_Tree<int>* root, int data) {
		if (root == NULL)
		{
			Binary_Tree<int>* newNode = new Binary_Tree<int>(data);
			return newNode;
		}
		if (root->data > data) {
			root->leftNode = insert(root->leftNode, data);
		}
		if (root->data < data) {
			root->rightNode = insert(root->rightNode, data);
		}
		return root;
	}
	void deleteData(int data) {

	}
	bool hasData(Binary_Tree<int>* root, int data) {
		if (root == NULL) return false;
		if (root->data == data) return true;
		if (root->data > data) {
			return hasData(root->leftNode, data);
		}
		else {
			return hasData(root->rightNode, data);
		}
	}
	bool printBST(int data) {

	}
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
		FetchRangeInBST(root, low, high, vec);
		int sum = 0;
		for (int i = 0; i < vec->size(); i++)
		{
			sum += vec->at(i);
		}
		return sum;
	}

	void FetchRangeInBST(Binary_Tree<int>* root, int low, int high, vector<int>* vec) {
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

	bool ValidateBST(Binary_Tree<int>* root) {
		vector<int>* vec = new vector<int>();
		BSTValidator(root, vec);
		for (int i = 0; i < vec->size(); i++)
		{
			if (i > 0)
			{
				if (vec->at(i) <= vec->at(i - 1))
				{
					return false;
				}
			}
			cout << vec->at(i);
		}
		return true;
	}
	void BSTValidator(Binary_Tree<int>* root, vector<int>* vec) {
		if (root == NULL)return;
		if (root->leftNode != NULL)
			BSTValidator(root->leftNode, vec);
		vec->push_back(root->data);
		if (root->rightNode != NULL)
			BSTValidator(root->rightNode, vec);
	}

	Binary_Tree<int>* sortedArrayToBST(vector<int>& nums) {
		Binary_Tree<int>* tree = treeHelper(nums, 0, nums.size() - 1);
		return tree;
	}
	Binary_Tree<int>* treeHelper(vector<int>& nums, int start, int end) {
		if (start > end) return NULL;
		int center = (end + start) / 2;
		Binary_Tree<int>* tree = new Binary_Tree<int>(nums[center]);
		tree->leftNode = treeHelper(nums, start, center - 1);
		tree->rightNode = treeHelper(nums, center + 1, end);
		return tree;
	}


	Binary_Tree<int>* insertIntoBSTTree(Binary_Tree<int>* root, int data) {
		if (root == NULL)
		{
			Binary_Tree<int>* newRoot = new Binary_Tree<int>(data);
			return newRoot;
		}
		else if (root->data > data)
		{
			root->leftNode = insertIntoBSTTree(root->leftNode, data);
		}
		else root->rightNode = insertIntoBSTTree(root->rightNode, data);
		return root;
	}
	Binary_Tree<int>* deleteNodeInBSTTree(Binary_Tree<int>* root, int data) {
		if (root == NULL)return root;
		if (root->data > data) {
			root->leftNode = deleteNodeInBSTTree(root->leftNode, data); return root;
		}
		if (root->data < data) {
			root->rightNode = deleteNodeInBSTTree(root->rightNode, data); return root;
		}
		if (root->data == data) {
			if (root->leftNode == NULL && root->rightNode == NULL) {
				root == NULL; return NULL;
			}
			else if (root->leftNode == NULL) {
				int minValue = MinValueInBST(root->rightNode);
				root->data = minValue;
				root->rightNode = deleteNodeInBSTTree(root->rightNode, minValue);
				return root;
			}
			else if (root->rightNode == NULL) {
				int maxValue = MaxValueInBST(root->leftNode);
				root->data = maxValue;
				root->leftNode = deleteNodeInBSTTree(root->leftNode, maxValue);
				return root;
			}
			else
			{
				int minValue = MinValueInBST(root->rightNode);
				root->data = minValue;
				root->rightNode = deleteNodeInBSTTree(root->rightNode, minValue);
				return root;
			}
		}
		return root;

	}
	//leetcode version
	/*TreeNode* deleteNode(TreeNode* root, int data) {
		if (root == NULL)return root;
		if (root->val > data) {
			root->left = deleteNode(root->left, data); return root;
		}
		if (root->val < data) {
			root->right = deleteNode(root->right, data); return root;
		}
		if (root->val == data) {
			if (root->left == NULL && root->right == NULL) {
				root = NULL; return NULL;
			}
			else if (root->left == NULL) {
				int minValue = MinValueInBST(root->right);
				root->val = minValue;
				root->right = deleteNode(root->right, data);
				return root;
			}
			else if (root->right == NULL) {
				int maxValue = MaxValueInBST(root->left);
				root->val = maxValue;
				root->left = deleteNode(root->left, data);
				return root;
			}
			else
			{
				int minValue = MinValueInBST(root->right);
				root->val = minValue;
				root->right = deleteNode(root->right, minValue);
				return root;
			}
		}
		return root;
	}*/

};
//
//[10, 5, 15, 3, 7, 13, 18, 1, null, 6]
//[5,4,6,null,null,3,7]

//10 5 15 3 7 13 18 1 -1 6 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
//5 4 6 -1 -1 3 7 -1 -1 -1 -1
// 2 1 3 -1 -1 -1 -1
// 5 3 6 2 4 -1 7 -1 -1 -1 -1 -1 -1 

//[5, 3, 6, 2, 4, null, 7]
//5
//Output
//[6, 3, 7, 2, 4, null, 7]
//Expected
//[6, 3, 7, 2, 4]