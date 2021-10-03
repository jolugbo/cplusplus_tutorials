#include <iostream>
using namespace std;
class CheckPalindrome {
public:
	CheckPalindrome() {
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
		cout << isPalindrome(arr, arrLength,0) << endl;
	}
	bool isPalindrome(int arr[],int length, int current) {
		if (current > length/2) {
			return true;
		}
		bool isEqual = arr[current] == arr[length - current - 1];
		if (isEqual) {
			isPalindrome(arr, length, current + 1);
		}
		else
			return false;

	}
};