#include <iostream>
using namespace std;
class IsArraySorted {
public:
	IsArraySorted() {
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
		if (checkArray(arr, arrLength, 0, 1))
		{
			cout << "True ";
		}
		else {
			cout << "False ";
		}
		
		
	}
	bool checkArray(int arr[], int length,int start,int end) {
		if (length == end)
		{
			return true;
		}
		else {
			bool currentCheck = arr[start] <= arr[end];
			bool returnValue = currentCheck && checkArray(arr, length, start + 1, end + 1);
			return returnValue;
		}
	}
};