#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

class ReversePolishNotation {
public:
	ReversePolishNotation(vector<string>& tokens) {
		stack<int> holder;
		for (int i = 0; i < tokens.size(); i++)
		{
			if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
			{
				holder.push(stoi(tokens[i]));
			}
			else
			{
				int a = holder.top();
				holder.pop();
				int b = holder.top();
				holder.pop();
				if (tokens[i] == "+")
				{
					holder.push(b + a);
				}
				else if (tokens[i] == "-")
				{
					holder.push(b - a);
				}
				else if (tokens[i] == "*")
				{
					holder.push(a * b);
				}
				else if (tokens[i] == "/")
				{
					holder.push(b / a);
				}
			}
		}
		cout<< holder.top();
	}

	bool isNumber(const string& str)
	{
		return str.find_first_not_of("0123456789") == string::npos;
	}
};