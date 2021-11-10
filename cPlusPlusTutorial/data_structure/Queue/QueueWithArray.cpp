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
		arr[currentIndex++] = value;
	}
	void pop() {
		if (firstIndex != 0)
			firstIndex++;
	}
};