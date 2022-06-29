//#include <iostream>
#include <sstream>
#include <regex>
using namespace std;

class MyAtoi {
public:
	MyAtoi(string s) {
		regex_replace(s, regex("(^[ ]+)|([ ]+$)"), "");
		stringstream holder(s);
		int output = 0;
		holder >> output;

		//return x;
	}
};