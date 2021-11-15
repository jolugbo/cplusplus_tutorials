#include<vector>
#include<iostream>
using namespace std;
template<typename T>
class Generic_Tree {
public:
	T data;
	vector<Generic_Tree<T>*> children;
	Generic_Tree(T value) {
		data = value;
	}
	void PrintTree(Generic_Tree* tree) {
		cout << tree->data << ": ";
		for (int i = 0; i < tree->children.size(); i++)
		{
			cout << tree->children.at(i)->data<< ", ";
		}
		cout << endl;
		for (int i = 0; i < tree->children.size(); i++)
		{
			PrintTree(tree->children[i]);
		}
	}

	Generic_Tree* TakeInput() {
		cout << "Input root data "<<endl;
		int root;
		cin >> root;
		Generic_Tree<int>* rootTree = new Generic_Tree<int>(root);
		cout << "Input number of children data " << endl;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			Generic_Tree<int>* childTree = TakeInput();
			rootTree->children.push_back(childTree);
		}
		return rootTree;


	}
};