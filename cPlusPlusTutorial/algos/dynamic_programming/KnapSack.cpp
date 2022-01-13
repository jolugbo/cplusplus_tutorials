#include <vector>
#include <unordered_map>
using namespace std;
class KnapSack {
public:
	int solve(vector<int>& A, vector<int>& B, int C ) {
		unordered_map<int, int> uo_map;
		return calc(A, B, C, B.size() - 1);
	}
	//works with memory issues
	int calc(vector<int>& A, vector<int>& B, int C, int len) {
		if (len < 0) return 0;
		else if (B.at(len) > C) {
			int ans =  0 + calc(A, B, C, len - 1);
			return ans;
		} 
		else {
			int whenIncluded = A[len] + calc(A, B, C - B[len], len - 1);
			int whennotIncluded = 0 + calc(A, B, C, len - 1);
			return max(whenIncluded, whennotIncluded);
		}
	}
	//solving using Dynamic ProgramminMethods
	/*int clac2(vector<int>& A, vector<int>& B, int C, int len) {
		int m = C;
		int n = A.size();
		int dynamicProgramming[m + 1][n + 1];
		for (int i = 0; i <= m; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				if (i == 0 || j == 0) {
					dynamicProgramming[i][j] = 0;
				}
				else if (B[i - 1] > j)
				{
					dynamicProgramming[i][j] = dynamicProgramming[i - 1][j];
				}
				else
				{
					int include = dynamicProgramming[i - 1][j];
					int exclude = dynamicProgramming[i][j - 1];
					dynamicProgramming[i][j] = max(include, exclude);
				}
			}
		}
		return dynamicProgramming[m][n];
	}*/
};

//Given two integer arrays Aand B of size N each which represent valuesand weights associated with N items respectively.
//
//Also given an integer C which represents knapsack capacity.
//
//Find out the maximum value subset of A such that sum of the weights of this subset is smaller than or equal to C.
//
//NOTE:
//
//You cannot break an item, either pick the complete item, or don’t pick it(0 - 1 property).