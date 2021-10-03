#include <iostream>
using namespace std;
class RecursivePrinting {
public:
	RecursivePrinting() {
		int arrLength;
		cout << "input length " << endl;
		cin >> arrLength;
		cout << "input " << arrLength << " items " << endl;
		char* arr;
		arr = new char[arrLength];
		for (int i = 0; i < arrLength; i++)
		{
			cin >> arr[i];
		}
		RecursivelyReversePrint(arr, arrLength);
	}
	void RecursivelyPrint(char arr[], int length) {
		if (length == 0) {
			return;
		}
		else
		{
			cout << arr[0] << endl;
			RecursivelyPrint(arr + 1, length - 1);
		}

	}
	void RecursivelyReversePrint(char arr[], int length) {
		if (length == 0) {
			return;
		}
		else
		{
			RecursivelyReversePrint(arr + 1, length - 1);
			cout << arr[0] << endl;
		}

	}
};