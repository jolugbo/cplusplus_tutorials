//Maximum Product of Word Lengths
#include <vector>
#include <iostream>
using namespace std;

class MaximumProductOfWordLengths {
public: 
	MaximumProductOfWordLengths(vector<string>& words) {
		vector<int > memoryPorts(words.size() + 1, 0);
		vector< vector<int>> computerMemory;
		for (int i = 0; i < words.size() + 1; i++)
		{
			computerMemory.push_back(memoryPorts);
		}
		for (int i = words.size(); i >= 0; i--)
		{

			for (int j = words.size(); j >= 0; j--)
			{
				if (i >= words.size() or j >= words.size()) {
					computerMemory[i][j] = 0;
				}
				else if (shareCommonLetters(words[i],words[j])) {
					computerMemory[i][j] = max(computerMemory[i + 1][j], computerMemory[i][j + 1]);
				}
				else {
					int size = words[i].length() * words[j].length();
					computerMemory[i][j] = max(size, max(computerMemory[i + 1][j], computerMemory[i][j + 1]));
				}
			}
		}
		cout << computerMemory[0][0];
	}
	bool shareCommonLetters(string first, string second) {
		for (int i = 0; i < first.length(); i++)
		{
			if (second.find(first[i]) != string::npos) {
				return true;
			};
		}
		return false;
	}
};