#include <cstdlib>
class QueueWithArray {
public:
	int firstIndex = 0;
	int currentIndex = 0;
	int size = 0;
	int width = 0;
	int* arr;
	QueueWithArray(int len) {
		width = len;
		arr = new int[width];
	}

	void push(int value) {
		if (currentIndex == size)
		{
			currentIndex = 0;
			arr[currentIndex++] = value;
		}
		arr[currentIndex++] = value;
	}
	void pop() {
		if (firstIndex != 0)
			firstIndex++;
	}
	int front() {
		return arr[firstIndex];
	}
	int size() {
		return abs(currentIndex - firstIndex - 1);
	}
};

// 1 2 3 4 5
// 1 0 0 1 1
// 1 1 0 0 0