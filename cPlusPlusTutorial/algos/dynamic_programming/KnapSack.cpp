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

	int knapsack(vector<int> A, vector<int> B, int C) {
		return knapsackCalc(A,B,C,0);
	}
	int knapsackCalc(vector<int> A, vector<int> B, int C,int position) {
		if (position >= A.size())return 0;
		if (B[position] > C) return knapsackCalc(A, B, C, position + 1);
		else {
			int include = A[position] + knapsackCalc(A, B, C - B[position], position + 1);
			int exclude = knapsackCalc(A, B, C , position + 1);
			int output = max(include, exclude);
			return output;
		}
	}

	int knapsackCalc(vector<int> A, vector<int> B, int C){
		if (C == 0)return 0;
		int dp[3][3];
		for (int i = 0; i <= A.size(); i++)
		{
			for (int j = 0; j <= C; j++)
			{
				if (i == 0 || j == 0)dp[i][j] = 0;
				else if (B[i - 1] > j)dp[i][j] = dp[i - 1][j];
				else
				{
					int include = A[i - 1] + dp[i -1][j - B[i - 1]];
					int exclude = dp[i - 1][j];
					dp[i][j] = max(include,exclude);
				}
			}
		}
		return dp[A.size()][C];
	}

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

//Problem Description
//
//Given two integer arrays A and B of size N each which represent values and weights associated with N items respectively.
//
//Also given an integer C which represents knapsack capacity.
//
//Find out the maximum value subset of A such that sum of the weights of this subset is smaller than or equal to C.
//
//NOTE:
//
//You cannot break an item, either pick the complete item, or don’t pick it(0 - 1 property).
//
//
//Problem Constraints
//1 <= N <= 103
//
//1 <= C <= 103
//
//1 <= A[i], B[i] <= 103
//
//
//
//Input Format
//First argument is an integer array A of size N denoting the values on N items.
//
//Second argument is an integer array B of size N denoting the weights on N items.
//
//Third argument is an integer C denoting the knapsack capacity.
//
//
//
//Output Format
//Return a single integer denoting the maximum value subset of A such that sum of the weights of this subset is smaller than or equal to C.
//
//
//
//Example Input
//Input 1:
//
//A = [60, 100, 120]
//B = [10, 20, 30]
//C = 50
//Input 2 :
//
//	A = [10, 20, 30, 40]
//	B = [12, 13, 15, 19]
//	C = 10
//
//
//	Example Output
//	Output 1:
//
//220
//Output 2 :
//
//	0
//
//
//	Example Explanation
//	Explanation 1:
//
//Taking items with weight 20 and 30 will give us the maximum value i.e 100 + 120 = 220
//Explanation 2 :
//
//	Knapsack capacity is 10 but each item has weight greater than 10 so no items can be considered in the knapsack therefore answer is 0.