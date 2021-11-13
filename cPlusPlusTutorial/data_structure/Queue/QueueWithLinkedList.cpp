#include "../LinkedList/Node.cpp"
using namespace std;
template<typename T>
class QueueWithLinkedList {
	Node* head;
	Node* tail;
	int size = 0;
public:
	QueueWithLinkedList(T newItem) {
		Node* newNode = new Node(newItem);
		head = tail = newNode;
		size++;
	}
	void push(int newItem) {

		Node* newNode = new Node(newItem);
		tail->next = newNode;
		tail = newNode;
		if (isEmpty)
			head = tail;
		size++;
	}
	void pop() {
		if (isEmpty())
		{
			return;
		}
		Node* n = head;
		head = head->next;
		n->next = NULL;
		delete n;
		size--;
	}
	bool isEmpty() {
		return size == 0;
	}
	int getSize() {
		return size;
	}
	int front() {
		return head ->data;
	}
};