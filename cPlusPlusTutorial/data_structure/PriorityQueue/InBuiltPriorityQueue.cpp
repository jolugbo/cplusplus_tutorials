#include <queue>
#include <iostream>
using namespace std;

class InBuiltPriorityQueue {
public:
	InBuiltPriorityQueue() {
		priority_queue<int> maxpq;
		maxpq.push(10);
		maxpq.push(100);
		maxpq.push(20);
		maxpq.push(17);
		maxpq.push(31);
		maxpq.push(210);
		cout << maxpq.size() << endl;
		while (maxpq.size() > 0)
		{
			cout << maxpq.top() << endl;
			maxpq.pop();
		}
		priority_queue<int,vector<int>,greater<int>> minpq;
	}
};