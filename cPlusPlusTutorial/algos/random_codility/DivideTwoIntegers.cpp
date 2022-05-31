#include <iostream>
using namespace std;
class DivideTwoIntegers {
public:
	DivideTwoIntegers(int dividend, int divisor) {

		if (dividend == INT_MIN && divisor == -1) cout<< INT_MAX;
		if (dividend == INT_MIN && divisor == 1) cout << INT_MIN;
		long int absDividend = abs(dividend);
		long int absDivisor = abs(divisor);

		int count = 0;
		while (absDividend >= absDivisor) {
			long int mul = absDivisor, tempHolder = 1;
			while (mul <= absDividend - mul) {
				mul += mul;
				tempHolder += tempHolder;
			}
			count += tempHolder;
			absDividend -= mul;
		}
		if ((dividend < 0 && divisor>0) || (dividend > 0 && divisor < 0)) cout<< -count;

		cout<< count;
	}
};