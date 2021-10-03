#include <iostream>
using namespace std;
class RecursivelyRemoveConsecutiveDuplicates {
public:
	RecursivelyRemoveConsecutiveDuplicates() {
		char arr[100] = "jkjkjkjkjk";
		RecursiveRemove(arr);
		for (int i = 0; i < 10; i++)
		{
			cout << arr[i];
		}
	}
	void RecursiveRemove(char arr[]) {
		if (arr[0] == '\0')
			return;
		else {
			if (arr[0] == arr[1]) {
				recursiveShift(arr);
				RecursiveRemove(arr);
			}
			else
				RecursiveRemove(arr + 1);
		}
	}
	void recursiveShift(char arr[]) {
		if (arr[0] == '\0')
			return;
		else {
			arr[0] = arr[1];
			recursiveShift(arr + 1);
		}
	}
};