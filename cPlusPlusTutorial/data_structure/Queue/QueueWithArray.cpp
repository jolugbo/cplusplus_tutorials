#include <cstdlib>
#include <iostream>
using namespace std;
template<typename T>
class QueueWithArray {
	T x;
public:
	int firstIndex = 0;
	int currentIndex = 0;
	int size = 0;
	int width = 0;
	T* arr;
	QueueWithArray(int len) {
		width = len;
		arr = new int[width];
	}

	void push(T value) {
		if (size == width)
		{
			cout << "queue filled" << endl;
		}
		if (currentIndex == size)
		{
			currentIndex = 0;
			arr[currentIndex++] = value;
		}
		else {
			arr[currentIndex++] = value;
		}
		size++;
	}
	void pop() {
		if (firstIndex != size)
			firstIndex++;
		else
		{
			firstIndex = ++firstIndex % width;
		}
		size--;

	}
	int front() {
		return arr[firstIndex];
	} 
	int size() {
		return size;
	}
	bool isEmpty() {
		return size == 0;
	}
};

// 1 2 3 4 5
// 1 0 0 1 1
// 1 1 0 1 1  2 - 4