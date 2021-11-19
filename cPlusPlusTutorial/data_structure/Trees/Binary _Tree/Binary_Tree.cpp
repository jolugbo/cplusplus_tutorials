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
		cout << tree->data << endl;
		PrintTreeRecursively(tree->leftNode);
		PrintTreeRecursively(tree->rightNode);
			
	}
};