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
		cout <<  endl;
		PrintTreeRecursively(tree->leftNode);
		PrintTreeRecursively(tree->rightNode);
			
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
			cout << "input left node " << endl;
			int leftData;
			cin >> leftData;
			if (leftData != -1)
			{
				Binary_Tree<T>* leftNode = new Binary_Tree<int>(leftData);
				que.push(leftNode);
				newNode->leftNode = leftNode;
			}
			cout << "input right node " << endl;
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
};