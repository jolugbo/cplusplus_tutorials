#include <queue>
#include <iostream>
using namespace std;
template<typename T>
class ReverseAQueue {
public:
	ReverseAQueue(queue<T> q) {
		queue<T> reversedQ;
		queue<T> queueReader = q;
		while (!queueReader.empty())
		{
			cout << queueReader.front() << " ";
			queueReader.pop();
		}
		reverse(q, reversedQ);
		cout <<endl;
		while (!reversedQ.empty())
		{
			cout << reversedQ.front();
			reversedQ.pop();
		}
	}
	void reverse(queue<T> q, queue<T>& reversedQ) {
		if (q.empty())return;
		T qItem = q.front();
		q.pop();
		reverse(q, reversedQ);
		reversedQ.push(qItem);
	}
};