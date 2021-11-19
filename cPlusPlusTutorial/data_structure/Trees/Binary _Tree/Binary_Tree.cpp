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
	void TakeInputRecursively(Binary_Tree* tree) {
		cout << "input node data" << endl;
		int data;
		cin>> data;
		if (data== -1)
		{
			return;
		}
		tree->data = data;
		tree->leftNode = new Binary_Tree<int>(0);
		tree->rightNode = new Binary_Tree<int>(0);
		TakeInputRecursively(tree->leftNode);
		TakeInputRecursively(tree->rightNode);
		//tree->
	}
};