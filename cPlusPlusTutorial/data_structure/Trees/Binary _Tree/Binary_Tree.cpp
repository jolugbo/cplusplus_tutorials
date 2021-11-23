#include <iostream>
#include <queue>
using namespace std;
template<typename T>
class Binary_Tree {
public:
	T data;
	Binary_Tree* leftNode;
	Binary_Tree* rightNode;
	Binary_Tree(T input) {
		this->data = input;
		leftNode = NULL;
		rightNode = NULL;
	}
	~Binary_Tree()
	{
		delete leftNode;
		delete rightNode;
	}
	void PrintTreeRecursively(Binary_Tree* tree) {
		if (tree == NULL)
		{
			return;
		}
		cout << tree->data << ": ";
		if (tree->leftNode != NULL)
		{
			cout << tree->leftNode->data << ", ";
		}
		if (tree->leftNode != NULL)
		{
			cout << tree->rightNode->data;
		}
		cout << endl;
		PrintTreeRecursively(tree->leftNode);
		PrintTreeRecursively(tree->rightNode);

	}
	void PrintTreeRecursivelyInOrderTraversal(Binary_Tree* tree) {
		if (tree == NULL)
		{
			return;
		}
		PrintTreeRecursivelyInOrderTraversal(tree->leftNode);
		cout << tree->data;
		PrintTreeRecursivelyInOrderTraversal(tree->rightNode);

	}

	int CountNodes(Binary_Tree<T>* tree) {
		int nodeCount = 1;
		if (tree == NULL)
		{
			return 0;
		}
		nodeCount += CountNodes(tree->leftNode);
		nodeCount += CountNodes(tree->rightNode);
	}
	//1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

	void PrintTreeLevelWise(Binary_Tree* tree) {
		if (tree == NULL)
		{
			return;
		}
		queue<Binary_Tree<T>*> que;
		que.push(tree);
		que.push(NULL);
		while (!que.empty())
		{
			Binary_Tree<T>* CurrentNode = que.front();
			que.pop();
			if (CurrentNode == NULL && !que.empty())
			{
				cout << endl;
				que.push(NULL);
			}
			else if (CurrentNode == NULL && que.empty()) {
				return;
			}
			else
			{
				cout << CurrentNode->data << " ";
				if (CurrentNode->leftNode != NULL)
				{
					//cout << CurrentNode->leftNode->data << ", ";
					que.push(CurrentNode->leftNode);
				}
				if (CurrentNode->rightNode != NULL)
				{
					//cout << CurrentNode->rightNode->data << ", ";
					que.push(CurrentNode->rightNode);
				}
			}
		}
	}
	//3 9 20 -1 -1 15 7
	int MaxLength(Binary_Tree* tree) {
		if (tree == NULL)
		{
			return 0;
		}
		queue<Binary_Tree<T>*> que;
		int maxLen = 1;
		que.push(tree);
		que.push(NULL);
		while (!que.empty())
		{
			Binary_Tree<T>* CurrentNode = que.front();
			que.pop();
			if (CurrentNode == NULL && !que.empty())
			{
				cout << endl;
				que.push(NULL);
				maxLen++;
			}
			else if (CurrentNode == NULL && que.empty()) {
				//return;
			}
			else
			{
				if (CurrentNode->leftNode != NULL)
				{
					//cout << CurrentNode->leftNode->data << ", ";
					que.push(CurrentNode->leftNode);
				}
				if (CurrentNode->rightNode != NULL)
				{
					//cout << CurrentNode->rightNode->data << ", ";
					que.push(CurrentNode->rightNode);
				}
			}
		}
		return maxLen;
	}

	Binary_Tree<T>* TakeInputRecursively() {
		cout << "input node data" << endl;
		int data;
		cin >> data;
		if (data == -1)
		{
			return NULL;
		}
		Binary_Tree<T>* tree = new Binary_Tree<int>(data);
		Binary_Tree<T>* leftNode = TakeInputRecursively();
		Binary_Tree<T>* rightNode = TakeInputRecursively();
		tree->leftNode = leftNode;
		tree->rightNode = rightNode;
		return tree;
	}

	Binary_Tree<T>* TakeInputLevelWise() {
		cout << "input root data " << endl;
		int rootData;
		cin >> rootData;
		Binary_Tree<T>* root = new Binary_Tree<int>(rootData);
		queue<Binary_Tree<T>*> que;
		que.push(root);
		while (!que.empty())
		{
			Binary_Tree<T>* newNode = que.front();
			cout << "input left node of "<< newNode->data << endl;
			int leftData;
			cin >> leftData;
			if (leftData != -1)
			{
				Binary_Tree<T>* leftNode = new Binary_Tree<int>(leftData);
				que.push(leftNode);
				newNode->leftNode = leftNode;
			}
			cout << "input right node of " << newNode->data << endl;
			int rightData;
			cin >> rightData;
			if (rightData != -1)
			{
				Binary_Tree<T>* rightNode = new Binary_Tree<int>(rightData);
				que.push(rightNode);
				newNode->rightNode = rightNode;
			}
			que.pop();
		}
		return root;
	}


	//A leetcode quiz on Binary tree
	void printOrder(Binary_Tree<T>* root, vector<int>& output) {
		if (root == NULL)return;
		printOrder(root->left, output);
		output.push_back(root->val);
		printOrder(root->right, output);
	}

	vector<int> inorderTraversal(Binary_Tree<T>* root) {
		vector<int> output;
		printOrder(root, output);
		return output;
	}
	// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1 
	// 1 2 2 -1 3 -1 3 -1 -1 -1 -1
	bool isSymmetric(Binary_Tree<T>* root) {
		bool resp = true;
		queue<Binary_Tree<T>*> leftQueue;
		queue<Binary_Tree<T>*> rightQueue;
		leftQueue.push(root->leftNode);
		rightQueue.push(root->rightNode);
		while (!leftQueue.empty() && !rightQueue.empty())
		{
			Binary_Tree<T>* leftChild = leftQueue.front();
			Binary_Tree<T>* rightChild = rightQueue.front();
			if (leftChild == NULL && rightChild != NULL)
			{
				return false;
			}
			else if (rightChild == NULL && leftChild != NULL)
			{
				return false;
			}
			else if (rightChild == NULL && leftChild == NULL)
			{

			}
			else if(leftChild->data != rightChild->data)
			{
				return false;
			}
			if(leftChild != NULL)
			leftQueue.push(leftChild->leftNode);
			if (leftChild != NULL)
			leftQueue.push(leftChild->rightNode);
			if (rightChild != NULL)
			rightQueue.push(rightChild->rightNode);
			if (rightChild != NULL)
			rightQueue.push(rightChild->leftNode);
			leftQueue.pop();
			rightQueue.pop();
		}
		return resp;
	}

	bool findInTree(Binary_Tree<T>* root, T data) {
		bool resp = false;
		queue< Binary_Tree<T>*> que;
		que.push(root);
		while (!que.empty())
		{
			Binary_Tree<T>* currentChild = que.front();
			que.pop();
			if (currentChild != NULL && currentChild->data == data)
			{
				return true;
			}
			if (currentChild != NULL)
			{
				que.push(currentChild->leftNode);
				que.push(currentChild->rightNode);
			}
		}
		return resp;
	}

	int findMinInTree(Binary_Tree<int>* root) {
		int resp = INT_MAX;
		queue< Binary_Tree<int>*> que;
		que.push(root);
		while (!que.empty())
		{
			Binary_Tree<T>* currentChild = que.front();
			que.pop();
			if (currentChild != NULL && currentChild->data < resp && currentChild->data != -1)
			{
				resp = currentChild->data;
			}
			if (currentChild != NULL)
			{
				que.push(currentChild->leftNode);
				que.push(currentChild->rightNode);
			}
		}
		return resp;
	}

	int findMaxInTree(Binary_Tree<int>* root) {
		int resp = INT_MIN;
		queue< Binary_Tree<int>*> que;
		que.push(root);
		while (!que.empty())
		{
			Binary_Tree<T>* currentChild = que.front();
			que.pop();
			if (currentChild != NULL && currentChild->data > resp && currentChild->data != -1)
			{
				resp = currentChild->data;
			}
			if (currentChild != NULL)
			{
				que.push(currentChild->leftNode);
				que.push(currentChild->rightNode);
			}
		}
		return resp;
	}
	int CountLeafNode(Binary_Tree<int>* root) {
		int resp = 0;
		queue< Binary_Tree<int>*> que;
		que.push(root);
		while(!que.empty())
		{
			Binary_Tree<T>* currentChild = que.front();
			que.pop();
			if (currentChild != NULL && currentChild->leftNode == NULL && currentChild->rightNode == NULL)
			{
				resp++;
			}
			if (currentChild != NULL)
			{
				que.push(currentChild->leftNode);
				que.push(currentChild->rightNode);
			}
		}
		return resp;
	}
};