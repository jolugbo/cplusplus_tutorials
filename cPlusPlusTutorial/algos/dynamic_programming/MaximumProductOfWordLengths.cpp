//Maximum Product of Word Lengths
#include <vector>
#include <iostream>
using namespace std;

class MaximumProductOfWordLengths {
public: 
	MaximumProductOfWordLengths(vector<string>& words) {
		vector<int > memoryPorts(words.size() + 1, 0);
		vector< vector<int>> computerMemory;
		for (int i = 0; i < words.size(); i++)
		{
			computerMemory.push_back(memoryPorts);
		}
		for (int i = words.size() + 1; i >= 0; i--)
		{

			for (int j = words.size() + 1; j >= 0; j--)
			{

			}
		}
	}
};