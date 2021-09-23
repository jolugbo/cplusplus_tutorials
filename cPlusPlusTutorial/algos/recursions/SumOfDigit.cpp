#include <iostream>
using namespace std;
class SumOfDigit {

public:
	SumOfDigit() {
		int digit;
		cout << "input Digit " << endl;
		cin >> digit;
		cout << " the sum of digits is " << SumCalculator(digit) << endl;
	}
	int SumCalculator(int digit) {
		int variableHolder = 0;
		if (digit == 0)
			return 0;
		else {
			variableHolder = digit % 10;
			return variableHolder + SumCalculator(digit/10);
		}
	}
};