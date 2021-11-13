#include "../LinkedList/Node.cpp"
using namespace std;
template<typename T>
class QueueWithLinkedList {
	Node* head = NULL;
	Node* tail = NULL;
	int size = 0;
public:
	QueueWithLinkedList(Node* startNode) {
		head = tail = startNode;
		size++;
	}
	void push(Node* newNode) {
		tail->next = newNode;
		tail = newNode;
		size++;
	}
	void pop() {
		Node* n = head;
		head = head->next;
		delete n;
		size--;
	}
	bool isEmpty() {
		return size == 0;
	}
	int size() {
		return size;
	}
	T front() {
		return Head ->data;
	}
};