#include <iostream>
using namespace std;
#pragma once
class Node {
public:
	int data;
	Node* next;
	Node(int item) {
		data = item;
		next = NULL;
	}
};

class LinkedListUse {
public:
	LinkedListUse() {
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
		Node* adjusted = insertNodeAtIthPosition(head, 3, 455);
		LinkedListPrinter(adjusted);
		Node * ListItemDeleted = deleteIthNode(head,0);
		LinkedListPrinter(ListItemDeleted);
		//dynamicLink();
	}

	//print linked list 
	void LinkedListPrinter(Node* head) {
		Node* temp = head;
		int count = 0;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
			count++;
		}
	}
	
	int LinkedListLength(Node* head) {
		Node* temp = head;
		int count = 0;
		while (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		return count;
	}

	void dynamicLink() {
		int nodeItem = 0;
		Node* head = NULL;
		Node* tail = NULL;
		cout << "input link value" << endl;
		cin >> nodeItem;
		while (nodeItem != -1)
		{
			Node *newNode = new Node(nodeItem);
			if (head == NULL)
			{
				head = newNode;
				tail = newNode;
			}
			else
			{
				//backward read
				/*newNode->next = head;
				head = newNode;*/

				//foward read
				tail->next = newNode;
				tail = newNode;
			}
			cout << "input link value" << endl;
			cin >> nodeItem;

		}
		//LinkedListPrinter(head);
		printNodeAtIthPosition(head,-2);
	}

	void printNodeAtIthPosition(Node* node, int position) {
		Node* temp = node;
		int count = 0;
		while (temp != NULL)
		{
			if (count == position)
			{
				cout << temp->data << endl;
				return;
			}
			temp = temp->next;
			count++;
		}
		if (position < 0 || position > count)
		{
			cout << "-1  position does not exist" << endl;
		}
	}
	
	Node* insertNodeAtIthPosition(Node* head, int i, int data) {
		if (i < 0) {
			return head;
		}
		if (i == 0) {
			Node* n = new Node(data);
			n->next = head;
			head = n;
			return head;
		}
		if (i > LinkedListLength(head))
		{
			return head;
		}
		else
		{
			Node* responseNode = head;
			int count = 1;
			while (count < i)
			{
				head = head->next;
				count++;
			}
			Node* n = new Node(data);
			n->next = head->next;
			head->next = n;
			return responseNode;
		}
	}

	Node* deleteIthNode(Node* node, int pos) {
		if (pos < 0)
		{
			return node;
		}
		if (pos == 0)
		{
			Node* newHead = node;
			node = node->next;
			return node;
		}
		else
		{
			Node* n = node;
			int counter = 1;
			while (counter < pos)
			{
				node = node->next;
				counter++;
			}
			Node* temp = node->next;
			node = temp->next->next;
		    temp->next = NULL;
			delete temp->next;
			return n;
		}
	}
};