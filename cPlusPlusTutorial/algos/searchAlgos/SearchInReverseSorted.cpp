#include <iostream>
#include <vector>
using namespace std;
class SearchInReverseSorted {
public:
	SearchInReverseSorted() {
		searchRange(1);
	}

	void searchRange(int target) {
		vector<int> nums;
		nums.push_back(4);
		nums.push_back(5);
		nums.push_back(6);
		nums.push_back(7);
		nums.push_back(0);
		nums.push_back(1);
		nums.push_back(2);
		vector<int> outp;
		outp.push_back(findTarget(nums, target));
		cout << outp[0] ;
		//return outp;
	}
	// [4,5,6,7,1,2,3]
	int findTarget(vector<int> num,int target) {
		int start = 0;
		int end = num.size() - 1;

		if (num.size() == 1)
		{
			if (num[0] == target)
				return 0;
			else
				return -1;
		}
		if (num.size() == 0)
		{
				return -1;
		}
		while (start <= end)
		{
			int mid = (start + end) / 2;
			if (target == num[mid]) {
				return mid;
			}
			if (num[mid] >= num[start])
			{
				if (target >= num[start] && target <= num[mid])
				{
					end = mid - 1;
				}
				else
				{
					start = mid + 1;
				}
			}
			else
			{
				if (target >= num[mid] && target <= num[end])
				{
					start = mid + 1;
				}
				else
					end = mid - 1;
			}
		}
		return -1;
	}
};