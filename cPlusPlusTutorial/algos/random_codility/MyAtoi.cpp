//#include <iostream>
#include <sstream>
using namespace std;

class MyAtoi {
public:
	MyAtoi(string s) {
		stringstream holder(s);
		int output = 0;
		holder >> output;

		//return x;
	}
};