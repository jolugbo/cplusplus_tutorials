#include <iostream>
using namespace std;
class SumOfArray {
public:
	SumOfArray() {
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
		cout << "Total Sum is " << calcSum(arr, arrLength, 0);
	}
	int calcSum(int arr[], int len, int i) {
		if (i == len) {
			return 0;
		}
		int total = 0;
		total = arr[i]+ calcSum(arr,len, i + 1);
		return total;
	}
};