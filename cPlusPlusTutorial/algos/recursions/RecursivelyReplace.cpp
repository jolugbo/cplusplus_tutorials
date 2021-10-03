#include <iostream>
using namespace std;
class RecursivelyReplace {
public:
	RecursivelyReplace() {
		char arr[100] = "aabsdssaa";
		RecursiveReplace(arr,'a', 'x');
		for (int i = 0; i < 10; i++)
		{
			cout << arr[i];
		}
	}
	void RecursiveReplace(char arr[], char x, char y) {
		if (arr[0] == '\0')
			return;
		else {
			if(arr[0] == x)
			arr[0] = y;
			RecursiveReplace(arr + 1, x, y);
		}
	}
};