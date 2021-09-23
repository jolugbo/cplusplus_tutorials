#include <iostream>
using namespace std;
class Fibonacci {

public:
	Fibonacci() {

		int number;
		cout << "input Fibonacci number " << endl;
		cin >> number;
		cout << "Fibonacci value is " << FibonacciCalculator(number) << endl;
	}
	int FibonacciCalculator(int number) {
		if (number <= 0)
			return 0;
		if (number == 1)
			return 1;
		else
			return FibonacciCalculator(number - 1) + FibonacciCalculator(number - 2);
	}
};