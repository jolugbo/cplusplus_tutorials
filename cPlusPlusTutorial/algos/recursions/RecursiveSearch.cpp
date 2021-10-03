#include <iostream>
using namespace std;
class RecursiveSearch {
public:
	RecursiveSearch() {
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
		cout << "input search item "  << endl;
		int SearchItem;
		cin >> SearchItem;
		if (SearchRecursively(arr,arrLength, SearchItem)) {
			cout << "item was found";
		}
		else {
			cout << "item not found";
		}
	}
	bool SearchRecursively(int arr[], int len, int item) {
		if (len == 0) {
			return false;
		}
		if (arr[0] == item) {
			return true;
		}
		else
		{
		  bool returnVal = SearchRecursively(arr + 1, len - 1, item);
		  return returnVal;
		}
	}
};