#include <stack>
#include <iostream>
using namespace std;
class InBuiltStack {
public:
	InBuiltStack() {
		stack<int> s;
		s.push(1);
		s.push(2);
		s.push(3);
		s.push(4);
		s.push(5);
		s.push(6);

		cout << s.top() << endl;
		s.pop();
		cout << s.top() << endl;
		s.pop();
		cout << s.top() << endl;
		s.pop();
		cout << s.top() << endl;
		s.pop();
		cout << s.top() << endl;
		s.pop();
		cout << s.top() << endl;
	}
};