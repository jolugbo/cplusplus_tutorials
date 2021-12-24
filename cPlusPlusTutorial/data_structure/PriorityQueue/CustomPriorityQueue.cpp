#include <vector>
using namespace std;
class CustomPriorityQueue {
public:
	vector<int> pq;
	CustomPriorityQueue() {
	
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

	void removeMinimum() {
		if (isEmpty())return;
		int childIndex = pq.size() - 1;
		swap(pq[0], pq[childIndex]);
		pq.pop_back();
		childIndex -= 1;
		int parentIndex = 0;
		while (parentIndex < pq.size() - 1)
		{
			int leftIndex = (2 * parentIndex) + 1;
			int rightIndex = (2 * parentIndex) + 2;
			if (leftIndex >= pq.size() - 1) return;
			if (pq[parentIndex] > pq[leftIndex])
			{
				swap(pq[parentIndex], pq[leftIndex]);
				parentIndex = leftIndex;
			}
			else if (pq[parentIndex] > pq[rightIndex])
			{
				swap(pq[parentIndex], pq[rightIndex]);
				parentIndex = rightIndex;
			}
			else return;
		}
	}
	void inplaceHeapSort(vector<int> arr) {
		int size = arr.size();
		int index = 0;
		int childIndex;
		int parentIndex;
		while (index < size - 1)
		{
			childIndex = index;
			parentIndex = (childIndex - 1) / 2;
			while (childIndex > 0)
			{
				parentIndex = (childIndex - 1) / 2;
				if (arr[childIndex] < arr[parentIndex])
				{
					swap(arr[childIndex], arr[parentIndex]);
				}
				childIndex = parentIndex;
			}

			index++;
		}
	}
};