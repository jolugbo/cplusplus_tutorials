#include <iostream>
using namespace std;
class Stack {
private:
	int* arr;
	int size;
	int currentIndex;
public:
	Stack(int size) {
		this->size = size;
		arr = new int[size];
		this->currentIndex = 0;
	}
	int Size() {
		return currentIndex;
	}
	void push(int item) {
		if (currentIndex == size)
		{
			cout << "Stack overflow";
			return;
		}
		arr[currentIndex] = item;
		currentIndex++;
	}
	void pop() {
		if (isEmpty())
		{
			cout << "Stack underflow";
			return;
		}
		currentIndex--;
	}
	int top() {
		if (isEmpty())
		{
			cout << "Stack underflow";
			return INT64_MIN;
		}
		else return arr[currentIndex - 1];
	}

	bool isEmpty() {
			return currentIndex == 0;
	}
};