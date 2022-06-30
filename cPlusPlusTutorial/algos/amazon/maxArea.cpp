#include <vector>
#include <iostream>
using namespace std;
class maxArea {
public:
    maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        while (start < end)
        {

        }
    }
    void maxAreaSlow(vector<int>& height) {
        vector<vector<int>> dp(height.size() + 1, vector<int>(height.size() + 1));
        for (int i = height.size(); i >= 0; i--) {
            for (int j = height.size(); j >= 0; j--) {
                if (i >= height.size() || j >= height.size())dp[i][j] = 0;
                else if (i == j) dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]);
                else {
                    int currentVolume = abs((i - j) * min(height[j], height[i]));
                    dp[i][j] = max(currentVolume, max(dp[i][j + 1], dp[i + 1][j]));
                }
            }
        }
        cout << dp[0][0];
    }
};