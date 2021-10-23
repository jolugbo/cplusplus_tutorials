#include <iostream>
#include "Node.cpp"
using namespace std;

class RecursiveNode {
public:
	RecursiveNode() {
		Node n1(1);
		Node* head = new Node(n1.data);
		Node n2(2);
		Node n3(3);
		Node n4(4);
		Node n5(5);
		Node* randomNode = new Node(455);
		head = &n1;
		n1.next = &n2;
		n2.next = &n3;
		n3.next = &n4;
		n4.next = &n5;
		int len = length(head);
		cout << len;
	}
	
	int length(Node* node) {
		if (node == NULL)
		{
			return 0;
		}
		else
		{
			node = node -> next;
			return 1 + length(node);
		}
	}
};