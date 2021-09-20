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
		int flag = 0;
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = 0; j < len - i - 1; j++)
			{
				if (arr[j] > arr[j+1]) {
					swap(arr[j], arr[j+1]);
					flag = 1;
				}
			}
			if (flag == 0)
				break;
		}
	}
};