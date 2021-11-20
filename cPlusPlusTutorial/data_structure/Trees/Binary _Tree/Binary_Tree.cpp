#include <iostream>
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
		cin>> data;
		if (data== -1)
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
};