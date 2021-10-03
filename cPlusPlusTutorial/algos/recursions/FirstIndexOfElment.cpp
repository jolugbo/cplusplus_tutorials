#include <iostream>
using namespace std;
class FirstIndexOfElement {
public:
	FirstIndexOfElement() {
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
		int position = FirstIndex(arr, arrLength, SearchItem, 0);
		if (position == -1)
			cout << "item not found in the array";
		else
			cout <<"Item found at position " << position;
	}
	int FirstIndex(int arr[],int len,int SearchItem, int currentIndex) {
		if (currentIndex == len)
			return -1;
		if (arr[currentIndex] == SearchItem)
			return currentIndex;
		else
		{
			return FirstIndex(arr, len, SearchItem, currentIndex + 1);
		}
	}
};