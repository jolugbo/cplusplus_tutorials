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
		minpq.push(10);
		minpq.push(100);
		minpq.push(20);
		minpq.push(17);
		minpq.push(31);
		minpq.push(210);
		cout << minpq.size() << endl;
		while (minpq.size() > 0)
		{
			cout << minpq.top() << endl;
			minpq.pop();
		}
	}
	void kSortedArr(int* arr, int n, int k) {
		priority_queue<int> pq;
		for (int i = 0; i < k; i++)
		{
			pq.push(arr[i]);
		}
		int s = 0;
		for (int i = k; i < n; i++)
		{
			arr[s] = pq.top();
			pq.pop();
			s++;
			pq.push(arr[i]);
		}
		while (!pq.empty())
		{
			arr[s++] = pq.top();
			pq.pop();
		}
	}
};