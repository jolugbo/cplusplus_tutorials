#include <vector>
#include <iostream>
using namespace std;
class diagonalDifference {
public:
	diagonalDifference(vector<vector<int>> input) {
		int right = 0;
		int left = 0;
		for (int i = 0; i < input.size(); i++)
		{
			right += input[i][i];
		}
		for (int i = input.size() - 1,j = 0; i >= 0; i--,j++)
		{
			left += input[j][i];
		}
		cout << left + right;
	}
};