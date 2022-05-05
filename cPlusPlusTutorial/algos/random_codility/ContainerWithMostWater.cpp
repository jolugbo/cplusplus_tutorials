#include "vector";
#include <algorithm>
using namespace std;
class ContainerWithMostWater {
public:
	ContainerWithMostWater(vector<int> height) {
		int output = 0;
		vector<vector<int>> dp;
		for (int i = 0; i < height.size(); i++)
		{
			vector<int> row(height.size());
			dp.push_back(row);
		}
		for (int i = 0; i < height.size(); i++)
		{
			for (int j = 0; j < height.size(); j++)
			{
				if (i < j)
				{
					dp[i][j] = 0;
				}
				else if (i == j)
				{
					dp[i][j] = height[j] > dp[i -1][j] ? height[j] : dp[i - 1][j];
				}
				else
				{
					if (height[j] <= height[i])
					{
						int multiplier = height[j] * (j - i);
						dp[i][j] = max( multiplier, max(dp[i][j - 1], dp[i-1][j]));
					}
					else
						dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
					
				}
			}
#
		}
		sort(dp.begin(), dp.end());
		for (int j = 0; j < height.size(); j++)
		{
			output = output >= dp[height.size() - 1][j] ? output : dp[height.size() - 1][j];
		}
		//return output;
	}
};