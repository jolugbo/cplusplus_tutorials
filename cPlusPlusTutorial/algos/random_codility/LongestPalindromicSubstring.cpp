#include "iostream"
#include <vector>
#include <algorithm>
using namespace std;
class LongestPalindromicSubstring {
public:
	LongestPalindromicSubstring(string s) {
		vector<string> allSubstring;
		AllSubstringOfAString(s, allSubstring);
		sort(allSubstring.begin(), allSubstring.end());
		for (int i = 0; i < allSubstring.size(); i++)
		{
			cout << allSubstring[i]<< endl;
		}

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

	void AllSubstringOfAString(string str, vector<string>& store)
	{
		for (int i = 0; i < str.length(); i++) {
			string subStr;
			for (int j = i; j < str.length(); j++) {
				subStr += str[j];
				store.push_back(subStr);
			}
		}
	}
};