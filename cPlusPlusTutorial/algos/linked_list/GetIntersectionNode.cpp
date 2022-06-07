#include <iostream>
#include "../../data_structure/LinkedList/Node.cpp"
using namespace std;

class GetIntersectionNode {
public:
	GetIntersectionNode(Node* headA, Node* headB) {
		Node responseNode = NULL;
		Node* temp = new Node(headA->data);
		Node* temp1 = new Node(headB->data);
		while (headA->next)
		{
			headA = headA->next;
			Node* holderNode = new Node(headA->data);
			holderNode->next = temp;
			temp = holderNode;
		}
		while (headB->next)
		{
			headB = headB->next;
			Node* holderNode = new Node(headB->data);
			holderNode->next = temp1;
			temp1 = holderNode;
		}
	}
};