#include<vector>
#include<queue>
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
	void PrintTreeRecursively(Generic_Tree* tree) {
		cout << tree->data << ": ";
		for (int i = 0; i < tree->children.size(); i++)
		{
			cout << tree->children.at(i)->data << ", ";
		}
		cout << endl;
		for (int i = 0; i < tree->children.size(); i++)
		{
			PrintTreeRecursively(tree->children[i]);
		}
	}
	void PrintTreeLevelWise(Generic_Tree* tree) {
		queue<Generic_Tree<int>*> q;
		q.push(tree);
		while (!q.empty())
		{
			Generic_Tree<int>* topNode = q.front();
			cout <<endl;
			cout << topNode->data << ": ";
			for (int i = 0; i < topNode->children.size(); i++)
			{
				q.push(topNode->children.at(i));
				cout << topNode->children.at(i)->data << ", ";
			}
			q.pop();
		}
	}

	Generic_Tree* TakeInputRecursively() {
		cout << "Input root data "<<endl;
		int root;
		cin >> root;
		Generic_Tree<int>* rootTree = new Generic_Tree<int>(root);
		cout << "Input number of children data " << endl;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			Generic_Tree<int>* childTree = TakeInputRecursively();
			rootTree->children.push_back(childTree);
		}
		return rootTree;
	}
	Generic_Tree* TakeInputLevelWise() {
		cout << "Input root data " << endl;
		int rootData;
		cin >> rootData;
		Generic_Tree<int>* root = new Generic_Tree<int>(rootData);
		queue<Generic_Tree<int>*> q;
		q.push(root);
		while (!q.empty())
		{
			Generic_Tree<int>* childTree = q.front();
			q.pop();
			cout << "how many input does node "<< childTree->data <<" have" << endl;
			int inputCount;
			cin >> inputCount;
			for (int i = 1; i <= inputCount; i++)
			{
				int childData;
				cout << "input the  " << i << "th child of " << childTree->data<< endl;
				cin >> childData;
				Generic_Tree<int>* subTree = new Generic_Tree<int>(childData);
				childTree->children.push_back(subTree);
				q.push(subTree);
			}
			//root->children.push_back(childTree);
		}
		return root;
	}
	int CountNodes(Generic_Tree* tree) {
		int nodeCount = 1;
		for (int i = 0; i < tree->children.size(); i++)
		{
			nodeCount += CountNodes(tree->children.at(i));
		}
		return nodeCount;
	}
	int HeightOfTree(Generic_Tree* tree) {
		int height = 0;
		for (int i = 0; i < tree->children.size(); i++)
		{
			height = max(height, HeightOfTree(tree->children.at(i)));
		}
		return height + 1;
	}
	void PrintAtKthPosition(Generic_Tree* tree,int k) {
		if (tree == NULL)return;
		if (k == 0) {
			cout << tree->data;
			return;
		}
		for (int i = 0; i < tree->children.size(); i++)
		{
			PrintAtKthPosition(tree->children.at(i),  k - 1);
		}
	}
};