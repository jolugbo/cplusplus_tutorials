#include "vector";
#include "iostream";
#include <algorithm>
using namespace std;
class ContainerWithMostWater {
public:
	ContainerWithMostWater(vector<int> height) {
		int startPoint = 0;
		int endPoint = height.size() - 1;
		int area = 0;
		while (startPoint < endPoint)
		{
			int multiplier = endPoint - startPoint;
			int currentValue = min(height[startPoint], height[endPoint]);
			area = max(area, multiplier * currentValue);
			if (height[startPoint] > height[endPoint])endPoint--;
			else startPoint++;
		}
        cout << area;
	}
};

//ContainerWithMostWater(vector<int> height) {
//	int output = 0;
//	vector<vector<int>> dp;
//	for (int i = 0; i < height.size() + 1; i++)
//	{
//		vector<int> row(height.size() + 1);
//		dp.push_back(row);
//	}
//	for (int i = height.size(); i >= 0; i--)
//	{
//		for (int j = height.size(); j >= 0; j--)
//		{
//			if (j >= height.size() || i >= height.size())dp[i][j] = 0;
//			else if (j == i)dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
//			else {
//				int lesser = height[i];
//				int greater = height[j];
//				int  multiplier = lesser <= greater ? lesser : greater;
//				int value = multiplier * abs(i - j);
//				dp[i][j] = max(value, max(dp[i + 1][j], dp[i][j + 1]));
//			}
//		}
//	}
//	cout << dp[0][0];
//}