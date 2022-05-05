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
				if (i == 0 or j == 0)
				{
					dp[i][j] = 0;
				}
				else
				{
					if (j > i)
					{
						int multiplier = height[i];
						int calc = multiplier * (j - i);
						dp[i][j] = calc >= dp[i][j - 1] ? calc : dp[i][j - 1];
					}
					else if (j == i)
					{
						int multiplier = height[i];
						int calc = multiplier * (j - i);
						dp[i][j] = calc >= dp[i][j - 1] ? calc : dp[i][j - 1];
					}
					else
						dp[i][j] = dp[i][j - 1] >= dp[i - 1][j] ? dp[i][j - 1] : dp[i - 1][j];
				}
			}
		}
		sort(dp.begin(), dp.end());
		for (int j = 0; j < height.size(); j++)
		{
			output = output >= dp[height.size() - 1][j] ? output : dp[height.size() - 1][j];
		}
		//return output;
	}
};