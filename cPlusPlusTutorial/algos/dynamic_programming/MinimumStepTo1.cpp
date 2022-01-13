#include <math.h>
#include <queue>
#include <unordered_map>
using namespace std;
class MinimumStepTo1 {
public:
	int calcMinimumStepTo1(int n, unordered_map<int, int>& uo_map) {
		priority_queue<int,vector<int>,greater<int>> pq;
		if (n == 1) return 0;
		if (uo_map.count(n) > 0)return uo_map[n];
		int ans1 = INT16_MAX, ans2 = INT16_MAX, ans3 = INT16_MAX;
		ans3 = calcMinimumStepTo1(n - 1,  uo_map);
		if (n % 2 == 0) ans2 = calcMinimumStepTo1(n / 2, uo_map);
		if (n % 3 == 0) ans1 =  calcMinimumStepTo1(n / 3,  uo_map);
		int ans = min(ans1, min(ans2, ans3));
		uo_map[n] = ans + 1;
		return ans + 1;
	}

	int calcMinStepsTo1(int n) {
		int *dynamicProgramming = new int[n + 1];
		for (int i = 0; i <= n; i++)
		{
			dynamicProgramming[i] = -1;
		}
		return helperFunction(n, dynamicProgramming);
	}

	int helperFunction(int n, int *ans) {
		if (n <= 1) return 0;
		if (ans[n] != -1) return ans[n];
		int ans1 = INT16_MAX, ans2 = INT16_MAX, ans3 = INT16_MAX;
		if (n % 2 == 0) ans2 = helperFunction(n / 2,ans);
		if (n % 3 == 0)ans1 = helperFunction(n / 3,ans);
		ans3 = helperFunction(n - 1, ans);
		int output = 1 + min(ans1, min(ans2, ans3));
		ans[n] = output;
		return output;
	}
};