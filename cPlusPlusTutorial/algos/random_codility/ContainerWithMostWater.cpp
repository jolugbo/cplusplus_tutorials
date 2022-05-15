#include "vector";
#include "iostream";
#include <algorithm>
using namespace std;
class ContainerWithMostWater {
public:
	ContainerWithMostWater(vector<int> height) {
		int output = 0;
		vector<vector<int>> dp;
		for (int i = 0; i < height.size() + 1; i++)
		{
			vector<int> row(height.size() + 1);
			dp.push_back(row);
		}
		for (int i = height.size(); i >= 0; i--)
		{
			for (int j = height.size(); j >= 0 ; j--)
			{
				if (j>= height.size() || i >= height.size())dp[i][j] = 0;
				else if(j == i)dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
				else {
					int lesser = height[i];
					int greater = height[j];
					int  multiplier = lesser <= greater ? lesser : greater;
					int value = multiplier * abs(i - j);
					dp[i][j] = max(value, max(dp[i + 1][j], dp[i][j + 1]));
				}
			}
		}
		cout << dp[0][0];
		//return output;
	}
};

//if (i == 0 and j == 0)dp[i][j] = 0;  4913370
//else if (i == 0)
//{
//	int holder = min(height[i], height[j]) * (j);
//	dp[i][j] = max(holder, dp[i][j - 1]);
//}
//else if (i == j)
//{
//	dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//}
//else if (i > j)
//{
//	int holder = min(height[i], height[j]) * (i - j);
//	dp[i][j] = max(holder, max(j > 0 ? dp[i][j - 1] : 0, dp[i - 1][j]));
//}
//else
//{
//	if (height[j] <= height[i])
//	{
//		int multiplier = height[j] * (j - i);
//		dp[i][j] = max(multiplier, max(dp[i][j - 1], dp[i - 1][j]));
//	}
//	else
//		dp[i][j] = max(min(height[i], height[j]) * (j - i), max(dp[i][j - 1], dp[i - 1][j]));
//
//}
//if (i == height.size() - 1 and j == height.size() - 1)
//{
//	output = dp[i][j];
//}