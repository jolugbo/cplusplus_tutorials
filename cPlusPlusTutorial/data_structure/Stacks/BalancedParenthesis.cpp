#include <iostream>
#include <stack>
using namespace std;
class BalancedParenthesis {
private:
	char openSquiggly = '{';
	char closedSquiggly = '}';
	char openBracket = '[';
	char closedBracket = ']';
	char openParenthesis = '(';
	char closedParenthesis = ')';
public:
	BalancedParenthesis(string s) {
		cout << isValid(s);
	}
public:
	bool isValid(string s) {
		stack<char> store;
		store.push(s[0]);
		int len = s.length();
		for (int i = 1; i < len; i++)
		{
			if (s[i] == openSquiggly | s[i] == openBracket | s[i] == openParenthesis)
			{
				store.push(s[i]);
			}
			else
			{
				if (store.empty())
				{
					store.push(s[i]);
				}
				else if ((store.top() == openSquiggly && s[i] == closedSquiggly) | 
					(store.top() == openBracket && s[i] == closedBracket) | 
					(store.top() == openParenthesis && s[i] == closedParenthesis))
				{
					store.pop();
				}
				else
				{
					store.push(s[i]);
				}
			}
		}
		if (store.empty())
			return true;
		else
		{
			return false;
		}
	}
};
