#include <iostream>
#include <vector>
using namespace std;
class GenerateParenthesis {
public:
	GenerateParenthesis(int n) {
		vector<string> generatedList;
		string current = "";
		generatorUtil(n, 0, 0, current, generatedList);
		
	}
	void generatorUtil(int n,int openCount,int closedCount,string current,vector<string> generatedList) {
		if (current.length() == (2 *n))
		{
			generatedList.push_back(current);
			current = "";
			return;
		}
		if (openCount < n) {
			current += '(';
			generatorUtil(n, 1 + openCount, closedCount, current, generatedList);
			current.pop_back();
		}
		if (closedCount < n) {
			current += ')';
			generatorUtil(n, openCount, 1 + closedCount, current, generatedList);
			current.pop_back();
		}
	}
};