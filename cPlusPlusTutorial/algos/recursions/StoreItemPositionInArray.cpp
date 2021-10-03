
#include <iostream>
using namespace std;
class StoreItemPositionInArray {
public:
	StoreItemPositionInArray() {
		int arrLength;
		cout << "input length " << endl;
		cin >> arrLength;
		cout << "input " << arrLength << " items " << endl;
		int* arr;
		arr = new int[arrLength];
		for (int i = 0; i < arrLength; i++)
		{
			cin >> arr[i];
		}
		cout << "input search item " << endl;
		int SearchItem;
		cin >> SearchItem;
		int* outArr;
		int outputCount = 0;
		outArr = new int[arrLength];
		StoreAllPosition(arr, arrLength, SearchItem, arrLength - 1, outArr, outputCount);
		cout << "input can be found at  " << endl;
		for (int i = outputCount - 1; i >= 0; i--)
		{
			cout<< outArr[i] <<endl;
		}
	}
	void StoreAllPosition(int arr[], int len, int SearchItem, int currentIndex,int outArr[],int & outputCount) {
		if (currentIndex == -1)
			return;
		if (arr[currentIndex] == SearchItem) {
			outArr[outputCount] = currentIndex; outputCount = outputCount + 1;
		}
		StoreAllPosition(arr, len, SearchItem, currentIndex - 1, outArr, outputCount);

	}
};