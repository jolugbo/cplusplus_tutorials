#include <iostream>
#include <vector>
using namespace std;

class RunningSum {
public:
	RunningSum(vector<int> nums) {
		int len = nums.size();
		vector<int> resp(len);
		resp[0] = nums[0];
		for (int i = 1; i < len; i++)
		{
			resp[i] = resp[i - 1] + nums[i];
		}
	}
};