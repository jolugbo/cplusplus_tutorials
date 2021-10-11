#include <iostream>
#include <vector>
using namespace std;
//class FirstAndLastOccurance {
//public:
//	FirstAndLastOccurance() {
//		int arrLength;
//		cout << "input length " << endl;
//		cin >> arrLength;
//		cout << "input " << arrLength << " items " << endl;
//		int* arr;
//		arr = new int[arrLength];
//		for (int i = 0; i < arrLength; i++)
//		{
//			cin >> arr[i];
//		}
//		cout << "array sorted" << endl;
//		for (int i = 0; i < arrLength; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//		cout << "input search clause" << endl;
//		int searchClause;
//		cin >> searchClause;
//		cout << "start binary search" << endl;
//		search(arr, 0, arrLength - 1, searchClause);
//	}
//	vector<int> searchRange(vector<int>& nums, int target) {
//		vector<int> outp = search(nums, 0, nums.size() - 1,target);
//	}
//	vector<int> search(vector<int>& arr,int start, int end, int searchClause) {
//		if (start >= end) {
//			return;
//		}
//		int mid = (end + start) / 2;
//		if (arr[mid] == searchClause) {
//			int firstPos = mid;
//			int LastPos = mid;
//			while (arr[firstPos] == searchClause)
//			{
//				firstPos--;
//			}
//			while (arr[LastPos] == searchClause)
//			{
//				LastPos++;
//			}
//			vector<int> outp;
//			outp.push_back(firstPos + 1);
//			outp.push_back(LastPos - 1);
//			return outp;
//
//			cout << firstPos + 1 << endl;
//			cout << LastPos - 1 << endl;
//			return;
//		}
//		if (arr[mid] > searchClause) {
//			search(arr, start, mid - 1, searchClause);
//		}
//		else
//		{
//			search(arr,mid + 1,end, searchClause);
//		}
//	}
//};

class FirstAndLastOccurance {
public:
	FirstAndLastOccurance() {
		searchRange(8);
	}

	vector<int> searchRange(int target) {
		vector<int> nums;
		nums.push_back(5);
		nums.push_back(7);
		nums.push_back(7);
		nums.push_back(8);
		nums.push_back(8);
		nums.push_back(10);
		vector<int> outp = search(nums, 0, nums.size() - 1, target);
		return outp;
	}
	vector<int> search(vector<int>& arr, int start, int end, int searchClause) {
		if (start >= end) {
			vector<int> outp;
			return outp;
		}
		int mid = (end + start) / 2;
		if (arr[mid] == searchClause) {
			int firstPos = mid;
			int LastPos = mid;
			while (arr[firstPos] == searchClause)
			{
				firstPos--;
			}
			while (arr[LastPos] == searchClause)
			{
				LastPos++;
			}
			vector<int> outp;
			outp.push_back(firstPos + 1);
			outp.push_back(LastPos - 1);
			return outp;

			// 			cout << firstPos + 1 << endl;42000000000000t
			// 			cout << LastPos - 1 << endl;
			// 			return;
		}
		if (arr[mid] > searchClause) {
			search(arr, start, mid - 1, searchClause);
		}
		else
		{
			search(arr, mid + 1, end, searchClause);
		}
	}
};

