#include <iostream>
using namespace std;
class Factorial {

public:
	Factorial() {

		int length;
		cout << "input Factorial length " << endl;
		cin >> length;
		cout << "Factorial value is "<< FactorialCalculator(length) << endl;
	}
	int FactorialCalculator(int len) {
		if (len < 0)
			return -1;
		if (len == 0)
			return 1;
		else
			return len * FactorialCalculator(len - 1);
	}
};