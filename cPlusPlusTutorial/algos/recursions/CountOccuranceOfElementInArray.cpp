#include <iostream>
using namespace std;
class CountOccuranceOfElementInArray {
public:
	CountOccuranceOfElementInArray() {
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
		int output = 0;
		cin >> SearchItem;
		cout << CountOccurance2(arr, arrLength, SearchItem, output) << " Occurance of element present in the Array"<<endl;
		cout << output;
	}
	int CountOccurance(int arr[], int len, int SearchItem, int currentIndex) {
		int count = 0;
		if (currentIndex == -1)
			return 0 ;
		if (arr[currentIndex] == SearchItem)
			count = 1;
		count = count + CountOccurance(arr, len, SearchItem, currentIndex - 1);
		return count;

	}

	int CountOccurance2(int arr[], int len, int SearchItem, int &out) {
		if (len == -1)
			return out;
		else
		{
			if (arr[0] == SearchItem)
			{
				out++;
			}
			CountOccurance2(arr + 1, len - 1, SearchItem, out);
		}

	}
};