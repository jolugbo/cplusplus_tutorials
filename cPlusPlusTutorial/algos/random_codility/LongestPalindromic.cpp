#include "iostream"
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class LongestPalindromicSubstring {
public:
	LongestPalindromicSubstring(string s) {
		unordered_map<char, int> m;

		for (int i = 0; i < s.length(); i++) {
			m[s[i]]++;
		}
		if (m[s[0]] == s.length())
		{
			//return s;
		}
		int longest = 0;
		int currentSize = 0;
		string longestString = "";
		for (int i = 0; i < s.length(); i++)
		{
			string substr;
			for (int j = i; j < s.length(); j++)
			{
				currentSize = 0;
				substr += s[j];
				for (int k = 0; k < substr.length(); k++)
				{
					char end = substr[substr.length() - k - 1];
					char start = substr[k];
					if (start == end)
					{
						currentSize = currentSize + 1;
					}
					else {
						currentSize = 0;
						break;
					}
				}
				if (longest < currentSize)
				{
					longest = currentSize;
					longestString = substr;
					if (longestString == s) {
						//return longestString;
					}
				}
			}
		}
	}
	string longestPalindrome(string s) {
		if (s.size() <= 1)
			return s;

		int len = 1;
		int start = 0, end = 0;
		for (int i = 0; i < s.size(); i++) {
			check(s, i - 1, i + 1, start, end);
			if (i + 1 < s.size() && s[i] == s[i + 1]) {
				if (end - start < 1) {
					start = i;
					end = i + 1;
				}
				check(s, i - 1, i + 2, start, end);
			}
		}
		return s.substr(start, end - start + 1);
	}

	void check(string& s, int i, int j, int& start, int& end) {
		for (; i >= 0 && j < s.size(); i--, j++) {
			if (s[i] != s[j])
				return;
			if (j - i > end - start) {
				start = i;
				end = j;
			}
		}
	}
	static bool compareInterval(string v1, const string v2)
	{
		return (v2.length() < v1.length());
	}
	//LongestPalindromicSubstring(string s) {
	//	string newSt = longestPalindrome(s);
	//	/*vector<string> allSubstring;
	//	string longest = "";
	//	AllSubstringOfAString(s, allSubstring);
	//	sort(allSubstring.begin(), allSubstring.end(), compareInterval);
	//	for (int i = 0; i < allSubstring.size(); i++)
	//	{
	//		if (isPalindrome(allSubstring[i], allSubstring[i].length(), 0)) {
	//			cout << allSubstring[i];
	//		}
	//	}*/

	//}

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