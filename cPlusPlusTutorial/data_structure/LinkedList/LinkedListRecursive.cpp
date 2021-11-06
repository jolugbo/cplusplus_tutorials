#include <iostream>
#include "Node.cpp"
using namespace std;

class RecursiveNode {
public:
	RecursiveNode() {
		Node n1(1);
		Node* head = new Node(n1.data);
		Node n2(2);
		Node* head2 = new Node(n2.data);
		Node n3(3);
		Node n4(6);
		Node n5(5);
		Node n6(4);
		Node* randomNode = new Node(455);
		head = &n1;
		head2 = &n2;
		n1.next = &n2;
		n2.next = &n3;
		n3.next = &n4;
		n4.next = &n5;
		n5.next = &n6;
		int len = length(head);
		//LinkedListPrinter(head);
		Node* newNode = sortLinkedList(head);
		LinkedListPrinter(newNode);
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
			node = node->next;
			Node* holderNode = new Node(node->data);
			holderNode->next = temp;
			temp = holderNode;
		}
		return temp;
	}
	
	void LinkedListPrinter(Node* head) {
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
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
	
	Node* RemoveIthNodeFromEnd(Node* node, int i) {
		if (node->next == NULL)
			return NULL;
		int len = length(node);
		int pos = len - i;
		if (pos == 0)
			return node->next;
		Node* n = node;
		int counter = 1;
		while (counter < pos)
		{
			node = node->next;
			counter++;
		}
		if (node->next->next != NULL)
		{
			node->next = node->next->next;
		}
		return n;
	}

	Node* mergeTwoSortedList(Node* node1,Node* node2) {
		Node* mergedNodes = new Node(-1);
		if (node1 == NULL && node2 == NULL) {
			return node1;
		}
		if (node1 == NULL) {
			return node2;
		}
		if (node2 == NULL) {
			return node1;
		}
		Node* responseNodes = mergedNodes;
		if (node1 && node2)
		{
			if (node1->data > node2->data) {
				mergedNodes->data = node2->data;
				node2 = node2->next;
			}
			else
			{
				mergedNodes->data = node1->data;
				node1 = node1->next;
			}
		}
		while (node1 != NULL && node2 != NULL)
		{
			if (node1->data < node2->data)
			{
				mergedNodes->next = new Node(node1->data);
				mergedNodes = mergedNodes->next;
				node1 = node1->next;
			}
			else
			{
				mergedNodes->next = new Node(node2->data);
				mergedNodes = mergedNodes->next;
				node2 = node2->next;
			}
		}
		if (node1 != NULL)
		{
			mergedNodes->next = node1;
		}
		if (node2 != NULL)
		{
			mergedNodes->next = node2;
		}
		return responseNodes;
	}

	Node* mergeTwoSortedListRecursively(Node* node1,Node* node2) {
		if (node1 == NULL)
			return node2;
		if (node2 == NULL)
			return node1;
		Node* mergedNode = NULL;
		if (node1->data < node2->data)
		{
			mergedNode = node1;
			mergedNode->next = mergeTwoSortedListRecursively(node1->next, node2);
		}
		else
		{
			mergedNode = node2;
			mergedNode->next = mergeTwoSortedListRecursively(node1, node2->next);
		}
		return mergedNode;
	}

	Node* sortLinkedList(Node* node) {
		if (node == NULL | node->next == NULL)return node;
		Node* slow = node;
		Node* fast = node->next;
		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		Node* nodeSplit = slow->next;
		slow->next = NULL;
		Node* node1 = sortLinkedList(node);
		Node* node2 = sortLinkedList(nodeSplit);
		Node* resp = mergeTwoSortedList(node1,node2);
	}
};