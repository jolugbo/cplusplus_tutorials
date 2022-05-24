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
	void generatorUtil(int n, int openCount, int closedCount,string current,vector<string>& bucket) {
		if (current.size() == (2 * n)) {
			if (openCount == n and closedCount == n)
			{
				bucket.push_back(current);
			}
			return;
		}
		if (openCount < n)
		{
			current+='(';
			generatorUtil(n, openCount + 1, closedCount, current, bucket);
			current.pop_back();
		}
		if (closedCount < openCount)
		{
			current += ')';
			generatorUtil(n, openCount, closedCount + 1, current, bucket);
			current.pop_back();
		}
	}
};