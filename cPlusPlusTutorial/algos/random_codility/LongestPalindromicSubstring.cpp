#include "iostream"
using namespace std;
class LongestPalindromicSubstring {
public:
	LongestPalindromicSubstring(string s) {
		
	}
	bool isPalindrome(int arr[], int length, int current) {
		if (current > length / 2) {
			return true;
		}
		bool isEqual = arr[current] == arr[length - current - 1];
		if (isEqual) {
			isPalindrome(arr, length, current + 1);
		}
		else
			return false;

	}
};