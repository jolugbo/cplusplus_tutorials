#include "../../data_structure/LinkedList/Node.cpp"
#include <string>
class AddTwoNumbers {

public:
    void addTwoNumbers(Node* l1, Node* l2) {
		Node* temp1 = l1;
		Node* temp2 = l2;
		int count = 0;
		string stringConvert1 = "";
		string stringConvert2 = "";
		while (temp1 )
		{
			stringConvert1 = to_string(temp1->data) + stringConvert1;
			temp1 = temp1->next;
		}
		while (temp2 != NULL)
		{
			stringConvert2 = to_string(temp2->data) + stringConvert2;
			temp2 = temp2->next;
		} 
		int carry{ 0 };
		int sum = atoi(stringConvert1.c_str()) + atoi(stringConvert2.c_str()) + carry;

		cout << sum << endl;
		cout << atoi(stringConvert2.c_str()) << endl;
		cout << stringConvert2 << endl;//[0,0,0,0,0,0,0,0,0,0,1]
		
		string intConvert = to_string(sum);
		char a = intConvert[intConvert.length() - 1];
		int ia = a - '0';
		Node* node1 = new Node(ia);
		Node* returnNode = node1;
		for (int i = intConvert.length() - 2; i >= 0; i--)
		{
			char a = intConvert[i];
			int ia = a - '0';
			node1->next = new Node(ia);
			node1 = node1->next;
		}
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