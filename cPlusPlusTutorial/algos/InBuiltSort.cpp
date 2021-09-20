#include <iostream>;
#include <algorithm>;
using namespace std;

class InBuiltSort {

public:
	InBuiltSort() {
		int arrLength;
		cin >> arrLength;
		int* arr;
		arr = new int[arrLength];
		for (int i = 0; i < arrLength; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr+arrLength);
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i];
		}
	}
};