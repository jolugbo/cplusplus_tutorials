#include <iostream>;
using namespace std;

class BubbleSort {

public:
	BubbleSort() {
		int arrLength;
		cin >> arrLength;
		int* arr;
		arr = new int[arrLength];
		for (int i = 0; i < arrLength; i++)
		{
			cin >> arr[i];
		}
		this->SortIt(arr, arrLength);
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i];
		}
	}
	void SortIt(int arr[],int len) {
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = 0; j < len -2; j++)
			{
				bubble(arr, i, i + 1);
			}
		}
	}
	void bubble(int arr[], int start, int end) {
		if (arr[start] > arr[end]) {
			swap(arr[start], arr[end]);
		}
	}
};