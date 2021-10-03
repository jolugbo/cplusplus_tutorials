#include <iostream>
using namespace std;
class PrintAllPositionOfElement {
public:
	PrintAllPositionOfElement() {
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
		PrintAllPosition(arr, arrLength, SearchItem, arrLength - 1);
	}
	void PrintAllPosition(int arr[], int len, int SearchItem, int currentIndex) {
		if (currentIndex == -1)
			return;
		if (arr[currentIndex] == SearchItem)
			cout<< "item "<< SearchItem << " found at position " << currentIndex << endl;
		PrintAllPosition(arr, len, SearchItem, currentIndex - 1);
		
	}
};