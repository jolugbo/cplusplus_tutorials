using namespace std;
#include <vector>;
#include <algorithm>

class FindMedianSortedArrays {
public:
	FindMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		for (int i = 0; i < nums2.size(); i++)
		{
			nums1.push_back(nums2[i]);
		}
		sort(nums1.begin(), nums1.end());
		int middle = nums1.size() / 2;
		double median = nums1.size() % 2 == 0? ((double)nums1[middle] + (double)nums1[middle - 1])/2 : (double)nums1[middle];
	}

	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> combo;
		int count1 = 0;
		int count2 = 0;
		while (nums1.size() > count1)
		{
			int currentVal = nums1[count1] <= nums2[count2] ? nums1[count1++] : nums2[count2];
			combo.push_back(currentVal);
		}
	}
};


//
//Given two sorted arrays nums1and nums2 of size m and n respectively, return the median of the two sorted arrays.
//
//The overall run time complexity should be O(log(m + n)).



//Example 1:
//
//Input: nums1 = [1, 3], nums2 = [2]
//Output : 2.00000
//Explanation : merged array = [1, 2, 3] and median is 2.
//Example 2 :
//
//	Input : nums1 = [1, 2], nums2 = [3, 4]
//	Output : 2.50000
//	Explanation : merged array = [1, 2, 3, 4] and median is(2 + 3) / 2 = 2.5.
//
//
//	Constraints :
//
//	nums1.length == m
//	nums2.length == n
//	0 <= m <= 1000
//	0 <= n <= 1000
//	1 <= m + n <= 2000
//	- 106 <= nums1[i], nums2[i] <= 106