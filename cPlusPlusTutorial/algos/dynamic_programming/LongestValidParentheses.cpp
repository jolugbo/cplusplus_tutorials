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
		stack<char> stackPile;
		vector<int> longestList;
		bool justPoped = false;
		int count = 0;
		stackPile.push(s[0]);
		for (int i = 1; i < s.length(); i++) {
			if (!stackPile.empty()) {
				char top = stackPile.top();
				//if () {
					if (top == '(' and s[i] == ')') {
						stackPile.pop();
						count += 2;
						justPoped = true;
					}
					else {
						stackPile.push(s[i]); 
						if (justPoped && top == ')') {
							longestList.push_back(count);
							count = 0;
						}
						justPoped = false;
					}
				//}
			}
			else if (!justPoped) {
				stackPile.push(s[i]);
				longestList.push_back(count);
				count = 0;
			}
			else{
				stackPile.push(s[i]);
			}
		}
		longestList.push_back(count);
		sort(longestList.begin(), longestList.end());
		return longestList[0];
	}
	static bool compareInterval(int& v1, const int& v2)
	{
		return (v1 > v2);
	}
	int calc2(string s) {
		int start = s.length()/2;
	}
};