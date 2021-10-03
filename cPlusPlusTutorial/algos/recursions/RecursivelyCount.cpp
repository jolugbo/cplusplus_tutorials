#include <iostream>
using namespace std;
class RecursivelyCount {
public:
	RecursivelyCount() {
		cout << "input items " << endl;
		char* arr;
		arr = new char[100];
		cin >> arr;
		cout << "Total Count " << Count(arr);
	}
	int Count(char arr[]) {
		if (arr[0] == '\0')
			return 0;
		else {
			int currentCount = Count(arr + 1);
			return currentCount + 1;
		}
	}
};