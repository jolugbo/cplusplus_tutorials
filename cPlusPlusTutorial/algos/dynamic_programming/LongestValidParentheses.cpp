#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

class LongestValidParentheses {
public:
	LongestValidParentheses(string s) {
		cout << calc(s);
	}
	int calc(string s) {
		stack<char> pile;
		vector<int> longestList;
		bool chainBroken = true;
		int count = 0;
		pile.push(s[0]);
		for (int i = 1; i < s.length(); i++) {
			if (!pile.empty()) {
				char top = pile.top();
				if ((top == '(' and s[i] == ')') or ( top == '(' and s[i] == ')')) {
					pile.pop();
					count += 2;
					longestList.push_back(count);
				}
				else {
					pile.push(s[i]);
					chainBroken = true;
					count = 0;
				}
			}
			else {
				pile.push(s[i]);
				count = 0;
			}
		}
		if (longestList.size() > 0) {
			sort(longestList.begin(), longestList.end(),compareInterval);
			return longestList.front();
		}
		return count;
	}
	static bool compareInterval(int& v1, const int& v2)
	{
		return (v1 > v2);
	}
};