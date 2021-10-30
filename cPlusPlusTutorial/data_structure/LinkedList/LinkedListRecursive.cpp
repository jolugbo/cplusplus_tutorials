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
		Node n6(6);
		Node* randomNode = new Node(455);
		head = &n1;
		n1.next = &n2;
		n2.next = &n3;
		n3.next = &n4;
		n4.next = &n5;
		n5.next = &n6;
		int len = length(head);
		cout << getMidNode(head)->data;
	}
	Node* getMidNode(Node* node) {
		int len = length(node);
		int mid = len / 2;
		int counter = 0;
		while (counter < mid)
		{
			node = node->next;
			counter++;
		}
		return node;
	}
	Node* reverseList(Node* node) {
		Node* temp = new Node(node->data);
		while (node -> next)
		{
			temp = node->next;
			node->next = node;

		}
	}
	//slow fast approach
	Node* getMidNode2(Node* node) {
		Node* slow = node;
		Node* fast = node->next;
		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		if (fast)
		{
			return slow->next;
		}
		return slow;
	}
	bool FindItemInLinkedList(Node* node, int item) {
		if (node == NULL)
		{
			return false;
		}
		if (node->data == item)
		{
			return true;
		}
		return FindItemInLinkedList(node->next, item);
	}
	bool FindItemInLinkedList2(Node* node, int item) {
		if (node == NULL)
		{
			return false;
		}
		else
		{
			while (node->next != NULL)
			{
				if (node->data == item)
				{
					return true;
				}
				node = node->next;
			}
			return false;
		}
	}
	int length(Node* node) {
		if (node == NULL)
		{
			return 0;
		}
		else
		{
			node = node->next;
			return 1 + length(node);
		}
	}
};