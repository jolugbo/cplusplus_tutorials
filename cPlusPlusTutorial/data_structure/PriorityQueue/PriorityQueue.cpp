#include <vector>
using namespace std;
class PriorityQueue {
public:
	vector<int> pq;
	PriorityQueue() {
	
	}

	bool isEmpty() {
		return pq.size() == 0;
	}

	int getMin() {
		if (isEmpty())return 0;
		return pq[0];
	}

	int size() {
		return pq.size();
	}

	void insert(int item) {
		pq.push_back(item);
		int childIndex = pq.size() - 1;
		while (childIndex > 0)
		{
			int parentIndex = (childIndex - 1) / 2;
			if (pq[parentIndex] > pq[childIndex])
			{
				swap(pq[parentIndex], pq[childIndex]);
			}
			childIndex = parentIndex;
		}
	}
};