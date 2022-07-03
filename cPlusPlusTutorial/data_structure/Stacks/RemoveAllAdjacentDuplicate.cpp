#include <iostream>
#include <stack>
using namespace std;
class RemoveAllAdjacentDuplicate {
public:
	RemoveAllAdjacentDuplicate(string s) {
		stack<char> output;
		string outputstr = "";
		output.push(s[0]);
		for (int i = 1; i < s.length(); i++)
		{
			if (output.empty())
			{
				output.push(s[i]);
			}
			else if (output.top() == s[i])
			{
				output.pop();
			}
			else
			{
				output.push(s[i]);
			}
		}

		while (!output.empty()) {
			outputstr = output.top()+ outputstr;
			output.pop();
		}
		while (!output.empty()) {
			outputstr.push_back(output.top());
			output.pop();
		}
		//reverse(outputstr.begin(), outputstr.end());
		cout << outputstr;
	}
};