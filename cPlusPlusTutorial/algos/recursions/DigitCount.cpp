#include <iostream>
using namespace std;
class DigitCount {

public:
	DigitCount() {
		int digit;
		cout << "input Digit " << endl;
		cin >> digit;
		cout <<" the number of digits is " << CountCalculator(digit) << endl;
	}
	int CountCalculator(int digit) {
		int variableHolder = 0;
		if (digit == 0)
			return 0;
		else {
			variableHolder = digit / 10;
			return 1 + CountCalculator(variableHolder);
		}
	}
};