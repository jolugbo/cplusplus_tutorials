#include "../../data_structure/LinkedList/Node.cpp"
#include <string>
class AddTwoNumbers {

public:
    void addTwoNumbers(Node* l1, Node* l2) {
		Node* temp1 = l1;
		int count = 0;
		string stringConvert = "";
		while (temp1 != NULL)
		{
			stringConvert += to_string(temp1->data);
			temp1 = temp1->next;
		}
		cout << stringConvert;

		//atoi(num.c_str())
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