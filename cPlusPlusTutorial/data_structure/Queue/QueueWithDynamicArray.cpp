#include <cstdlib>
#include <iostream>
using namespace std;
template<typename T>
class QueueWithDynamicArray {
public:
	int firstIndex = 0;
	int currentIndex = 0;
	int size = 0;
	int width = 0;
	T* arr;

	QueueWithArray(int len) {
		width = len;
		arr = new T[width];
	}

	void push(T value) {
		if (size == width)
		{
			int* arrTemp = new T[width * 2];
			for (int i = 0; i < width; i++)
			{
				arrTemp[i] = arr[i];
			}
			width = width * 2;
			arr = arrTemp;
			delete arrTemp;
			arr[currentIndex++] = value;
			return;
		}
		if (currentIndex == width)
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
		if (!isEmpty())
		{
			if (firstIndex != size)
				firstIndex++;
			if (firstIndex == width)
			{
				firstIndex = firstIndex % width;
			}
			size--;
		}

	}

	T front() {
		if (size == 0)
		{
			return 0;
		}
		return arr[firstIndex];
	}

	int length() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}
};

// 1 2 3 4 5
// 1 0 0 1 1
// 1 1 0 1 1  2 - 4