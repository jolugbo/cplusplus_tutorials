#ifndef Binary_Tree_H
#pragma once
#define Binary_Tree_H
#include <iostream>
#include <queue>
using namespace std;

namespace Btree {
	template<typename T>
class Binary_Tree {
public:
	 T data;
	 Binary_Tree* leftNode;
	 Binary_Tree* rightNode;
	Binary_Tree(T input);
	~Binary_Tree();
	void PrintTreeRecursively(Binary_Tree* tree);
	void PrintTreeRecursivelyInOrderTraversal(Binary_Tree* tree);

	int CountNodes(Binary_Tree<T>* tree);
	//1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

	void PrintTreeLevelWise(Binary_Tree* tree);
	//3 9 20 -1 -1 15 7
	int MaxLength(Binary_Tree* tree);

	Binary_Tree<T>* TakeInputRecursively();

	Binary_Tree<T>* TakeInputLevelWise();


	//A leetcode quiz on Binary tree
	void printOrder(Binary_Tree<T>* root, vector<int>& output);

	vector<int> inorderTraversal(Binary_Tree<T>* root);
	// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1 
	// 1 2 2 -1 3 -1 3 -1 -1 -1 -1
	bool isSymmetric(Binary_Tree<T>* root);

	bool findInTree(Binary_Tree<T>* root, T data);

	int findMinInTree(Binary_Tree<int>* root);

	int findMaxInTree(Binary_Tree<int>* root);
	int CountLeafNode(Binary_Tree<int>* root);

	Binary_Tree<int>* ConstructTreeHelper(vector<int> inOrder, vector<int> preOrder, int inOrderStart, int inOrderEnd, int preOrderStart, int preOrderEnd);

	Binary_Tree<int>* ConstructFromLeftRightTraversal(vector<int> inOrderTraversal, vector<int> preOrderTraversal);
	Binary_Tree<int>* ConstructTreeHelper2(vector<int> inOrder, vector<int> postOrder, int inOrderStart, int inOrderEnd, int postOrderStart, int postOrderEnd);

	Binary_Tree<int>* ConstructFromInOrderPostOrderTraversal(vector<int> inOrderTraversal, vector<int> preOrderTraversal);
	int height(Binary_Tree<int>* root);

	int DiameterOfBinaryTree(Binary_Tree<int>* root);

	pair<int, int> BinaryTreeDiameterCompute(Binary_Tree<int>* root);
	int DiameterOfBinaryTree2(Binary_Tree<int>* root);

	bool getPath(Binary_Tree<int>* root, int target, vector<int>* path);
};

}
#endif // !1

