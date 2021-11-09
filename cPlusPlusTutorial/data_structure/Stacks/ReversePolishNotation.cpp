#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class ReversePolishNotation {
public:
	ReversePolishNotation(vector<string>& tokens) {
		stack<string> holder;
		for (int i = 0; i < tokens.size(); i++)
		{
			if (isNumber(tokens[i]))
			{
				holder.push(tokens[i]);
			}
		}
	}
	bool isNumber(const string& str)
	{
		return str.find_first_not_of("0123456789") == string::npos;
	}
};