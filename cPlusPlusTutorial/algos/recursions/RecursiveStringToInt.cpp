#include <iostream>
#include <vector>
using namespace std;
class RecursivelyStringToInt {
public:
	RecursivelyStringToInt() {
		int arrLength;
		cout << "input length " << endl;
		cin >> arrLength;
		cout << "input items " << endl;
		char* input;
		input = new char[arrLength];
		for (int i = 0; i < arrLength; i++)
		{
			cin >> input[i];
		}
		int numConverted = StringToInt(input, arrLength );
		cout << endl <<"Output Value " << numConverted << endl;
	}
	int StringToInt(char input[], int n) {
		if (n == false) {
			return 0;
		}
		else {
			int currentAns = StringToInt(input,n -1);
			int LastDigit = input[n - 1] - '0';
			return (currentAns * 10) + LastDigit;
		}
	}
};