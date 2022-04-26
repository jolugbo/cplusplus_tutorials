#include <iostream>
#include <string>
using namespace std;

class PalindromeNumber {
public:
	PalindromeNumber(int num) {
		string convert = to_string(num); 
		bool response = isPalindrome(convert, convert.length(),0);
	}
	bool isPalindrome(string value, int length, int current) {
		if (current > length / 2) {
			return true;
		}
		bool isEqual = value[current] == value[length - current - 1];
		if (isEqual) {
			isPalindrome(value, length, current + 1);
		}
		else
			return false;
	}
};