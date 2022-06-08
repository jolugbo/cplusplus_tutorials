#include <iostream>
#include "../../data_structure/LinkedList/Node.cpp"
using namespace std;

class GetIntersectionNode {
public:
	GetIntersectionNode(Node* headA, Node* headB) {

		Node* temp1 = headA, * temp2 = headB;
		while (temp1 != temp2) {
			if (temp1)temp1 = temp1->next;
			else temp1 = headB;
			if (temp2)temp2 = temp2->next;
			else temp2 = headA;
		}
		//return temp2;
		cout<< "done";


		//Node responseNode = NULL;
		//Node* temp = new Node(headA->data);
		//Node* temp1 = new Node(headB->data);
		//Node* outputNode = new Node(headB->data);
		//Node* outputNode2 = outputNode;
		//while (headA->next)
		//{
		//	headA = headA->next;
		//	Node* holderNode = new Node(headA->data);
		//	holderNode->next = temp;
		//	temp = holderNode;
		//}

		//while (headB->next)
		//{
		//	headB = headB->next;
		//	Node* holderNode = new Node(headB->data);
		//	holderNode->next = temp1;
		//	temp1 = holderNode;
		//}

		//while (temp->next or temp1->next)
		//{
		//	if (temp->data == temp->data)
		//	{
		//		Node* holderNode = new Node(temp->next->data);
		//		outputNode->next = holderNode;
		//		outputNode = outputNode->next;
		//		temp = temp->next;
		//		temp1 = temp1->next; 
		//	}
		//	else
		//	{
		//		//return outputNode;
		//	}
		//}
	}
};