#include <queue>
#include <iostream>
using namespace std;
class InBuiltQueue {
public:
	InBuiltQueue() {
		queue<int> q;

		q.push(10);
		q.push(20);
		q.push(30);
		q.push(40);
		q.push(50);
		q.push(60);
		q.push(70);
		cout << q.front() << endl;
		q.pop();
		q.pop();
		q.pop();

		cout << q.front() << endl;
		cout << q.size() << endl;
		cout << q.empty() << endl;

		q.push(60);
		q.push(70);

		q.pop();
		q.pop();
		cout << q.front() << endl;
		cout << q.size() << endl;
	}
};