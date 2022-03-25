#include "../../data_structure/LinkedList/Node.cpp"
#include <string>
class AddTwoNumbers {

public:
	Node* addTwoNumbers(Node* l1, Node* l2) {
		Node* temp1 = l1;
		int carry{ 0 };
		Node* returnNode = new Node(0);
		Node* temp2 = returnNode;
		while (l1 || l2 || carry > 0)
		{
			int l1Val = l1 ? l1->data : 0;
			int l2Val = l2 ? l2->data : 0;
			int currentSum = l1Val + l2Val + carry;
			l1 = l1 ? l1->next : NULL;
			l2 = l2 ? l2->next : NULL;
			carry = currentSum / 10;
			Node* temp = new Node(currentSum % 10);
			returnNode->next = temp;
			returnNode = returnNode->next;
		}
		if (temp2)
		{
			temp2 = temp2->next;
		}
		return temp2;
    }
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
};