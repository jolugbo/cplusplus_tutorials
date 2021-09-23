#include <iostream>
using namespace std;
class SelectionSort{
public:
	SelectionSort() {
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
public:
	void SortIt(int arr[], int len) {
		for (int i = 0; i < len -2; i++)
		{
			int smallest = arr[i];
			int smallestPos = i;
			for (int j = len - 1; j > i ; j--)
			{
				if (arr[j] < smallest) {
					smallest = arr[j];
					smallestPos = j;
				}
			}
			if (arr[i]!=smallest) {
				swap(arr[i], arr[smallestPos]);
			}
		}
	}
};

