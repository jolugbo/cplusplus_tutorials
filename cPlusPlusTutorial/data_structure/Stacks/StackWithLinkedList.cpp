#include "../LinkedList/Node.cpp"
class StackWithLinkedList {
public:
	Node* head;
	int size = 0;
	
	void push(int item) {
		Node* temp = new Node(item);
		temp->next = head;
		head = temp;
		size++;
	}
	void pop() {
		Node* temp = head;
		head = temp->next;
		delete temp;
		size--;
	}

};