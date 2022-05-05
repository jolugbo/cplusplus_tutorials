#include "vector";
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
				if (i == 0)
				{
					dp[i][j] = height[i] * j;
				}
				else
				{
					int multiplier = height[i] <= height[j] ? height[i] : height[j];
					if (j > 0)
					{
						int calc = multiplier * (j - 1);
						dp[i][j] = calc >= dp[i][j - 1] ? calc : dp[i][j - 1];
					}
					else
						dp[i][j] = multiplier * j;
				}
			}
		}
		for (int j = 0; j < height.size(); j++)
		{
			output = output >= dp[height.size() - 1][j] ? output : dp[height.size() - 1][j];
		}
		//return output;
	}
};