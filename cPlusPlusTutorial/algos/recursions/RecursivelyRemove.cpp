#include <iostream>
using namespace std;
class RecursivelyRemove {
public:
	RecursivelyRemove() {
		char arr[100] = "saabfklsa";
		RecursiveRemove(arr, 'a');
		for (int i = 0; i < 10; i++)
		{
			cout << arr[i];
		}
	}
	void RecursiveRemove(char arr[], char x) {
		if (arr[0] == '\0')
			return;
		else {
			if (arr[0] == x) {
				recursiveShift(arr);
				RecursiveRemove(arr, x);
			}
			else
				RecursiveRemove(arr + 1, x);
		}
	}
	void recursiveShift(char arr[]) {
		if (arr[0] == '\0')
			return;
		else {
			arr[0] = arr[1];
			recursiveShift(arr+1);
		}
	}
};
//location size title and price