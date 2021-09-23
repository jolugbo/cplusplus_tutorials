#include <iostream>
using namespace std;
class SummedMultiplier {

public:
	SummedMultiplier() {
		int digit;
		int multiplier;
		cout << "input Digit " << endl;
		cin >> digit;
		cout << "input multiplier " << endl;
		cin >> multiplier;
		cout << "the sum of digits is " << SummedMultiplierCalculator(digit,multiplier) << endl;
	}
	int SummedMultiplierCalculator(int digit, int multiplier) {
		if (multiplier == 0)
			return 0;
		else {
			return digit + SummedMultiplierCalculator(digit , multiplier - 1);
		}
	}
};