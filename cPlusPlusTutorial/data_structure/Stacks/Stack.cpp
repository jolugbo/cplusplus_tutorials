#include <iostream>
using namespace std;
template<typename T>
class Stack {
private:
	T* arr;
	int size;
	int currentIndex;
public:
	Stack(int size) {
		this->size = size;
		arr = new T[size];
		this->currentIndex = 0;
	}
	int Size() {
		return currentIndex;
	}
	void push(T item) {
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
	T top() {
		if (isEmpty())
		{
			cout << "Stack underflow";
			return 0;
		}
		else return arr[currentIndex - 1];
	}

	bool isEmpty() {
			return currentIndex == 0;
	}
};