#include <iostream>
#include <string>
using namespace std;
class ReverseInteger {
public:
	ReverseInteger(int x) {
		if (x >= INT32_MAX || x <= INT32_MIN) {
			x = 0;
		}     //return value according to the question statement
		bool isNegative = false;
		if (x % 10 == 0)
			x = x / 10;
		if (x < 0) {
			isNegative = true;
			x = x * -1;
		}
		string convert = to_string(x);
		reverse(convert.begin(), convert.end());
		double sum = atof(convert.c_str());
		if (sum >= INT32_MAX || sum <= INT32_MIN) {
			sum = 0;
		}
		else
		{
			if (isNegative)sum = sum * -1;
			int test = (int)round(sum);
			//return (int)round(sum);
		}
	}
};