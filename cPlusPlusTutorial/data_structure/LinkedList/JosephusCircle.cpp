#include "Node.cpp"

//using circular linked list execute every x position person, what is the best position to stand
class JosephusCircle {
public:
	JosephusCircle() {

		Node n1(1);
		Node* head = new Node(n1.data);
		Node n2(2);
		Node n3(3);
		Node n4(4);
		Node n5(5);
		Node n6(6);
		head = &n1;
		n1.next = &n2;
		n2.next = &n3;
		n3.next = &n4;
		n4.next = &n5;
		n5.next = &n1;
		n6.next = &n1;
		BestSpot(head, 3);
	}

	void BestSpot(Node* head,int position) {
		int counter = 1;
		Node* headNode = head;
		while (head != head->next)
		{
			if (counter == (position - 1))
			{
				head->next = head->next->next;
				head = head->next;
				counter = 1;
			}
			else
			{
				head = head->next;
				counter++;
			}
		}
		cout << head->data;
	}
};