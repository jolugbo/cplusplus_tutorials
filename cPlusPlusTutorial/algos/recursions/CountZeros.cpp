#include <iostream>
using namespace std;
class CountZeros {

public:
	CountZeros() {
		int digit;
		cout << "input Digit " << endl;
		cin >> digit;
		cout << "the sum of digits is " << CountZerosCalculator(digit) << endl;
	}
	int CountZerosCalculator(int digit) {
		if (digit == 0)
			return 0;
		else {
			int hasZero = (digit % 10 == 0) ? 1 : 0;
			return hasZero + CountZerosCalculator(digit/10);
		}
	}
};