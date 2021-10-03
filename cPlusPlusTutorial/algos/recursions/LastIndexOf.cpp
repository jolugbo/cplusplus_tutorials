#include <iostream>
using namespace std;
class LastIndexOfElement {
public:
	LastIndexOfElement() {
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
		int position = LastIndex(arr, arrLength, SearchItem, arrLength - 1);
		if (position == -1)
			cout << "item not found in the array";
		else
			cout << "Item found at position " << position;
	}
	int LastIndex(int arr[], int len, int SearchItem, int currentIndex) {
		if (currentIndex == -1)
			return -1;
		if (arr[currentIndex] == SearchItem)
			return currentIndex;
		else
		{
			return LastIndex(arr, len, SearchItem, currentIndex - 1);
		}
	}
	int LastIndex2(int arr[], int len, int SearchItem, int currentIndex) {
		if (currentIndex == len)
			return -1;
		int lastIndex = LastIndex2(arr, len, SearchItem, currentIndex + 1);
		if (lastIndex == -1)
			if (arr[currentIndex] == SearchItem)
			{
				return currentIndex;
			}
			else
			{
				return -1;
			}
		else
		{
			return currentIndex;
		}
	}
};