#include <iostream>
#include <vector>
using namespace std;
class FirstAndLastOccurance {
public:
	FirstAndLastOccurance() {
		int arrLength;
		cout << "input length " << endl;
		cin >> arrLength;
		cout << "input " << arrLength << " items " << endl;
		int* arr;
		arr = new int[arrLength];
		for (int i = 0; i < arrLength; i++)
		{
			cin >> arr[i];
		}
		cout << "array sorted" << endl;
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "input search clause" << endl;
		int searchClause;
		cin >> searchClause;
		cout << "start binary search" << endl;
		search(arr, 0, arrLength - 1, searchClause);
	}
	void search(int arr[],int start, int end, int searchClause) {
		if (start >= end) {
			return;
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
			cout << firstPos + 1 << endl;
			cout << LastPos - 1 << endl;
			return;
		}
		if (arr[mid] > searchClause) {
			search(arr, start, mid - 1, searchClause);
		}
		else
		{
			search(arr,mid + 1,end, searchClause);
		}
	}
};
//to count occurance return last index - first index plus one
class FirstAndLastOccurance2 {
public:
	FirstAndLastOccurance2() {
		searchRange(8);
	}

	void searchRange(int target) {
		vector<int> nums;
		nums.push_back(2);
		nums.push_back(7);
		nums.push_back(7);
		nums.push_back(8);
		nums.push_back(8);
		nums.push_back(10);
		vector<int> outp;// = search(nums, 0, nums.size() - 1, target);
		outp.push_back(getFirst(nums, target));
		outp.push_back(getLast(nums, target));
		cout << outp[0]<<outp[1];
		//return outp;
	}
	int getFirst(vector<int>& arr, int target) {
		int start = 0;
		int end = arr.size() - 1;
		int ans = -1;
		while (start <= end)
		{
			int mid = start + (end - start) / 2;
			if (arr[mid] == target)
			{
				ans = mid;
				end = mid - 1;
			}
			if (arr[mid] > target) {
				end = mid - 1;
			}
			else if (arr[mid] < target)
			{
				start = mid + 1;
			}
		}
		return ans;
	}
	int getLast(vector<int>& arr, int target) {
		int start = 0;
		int end = arr.size() - 1;
		int ans = -1;
		while (start <= end)
		{
			int mid = start + (end - start) / 2;
			if (arr[mid] == target)
			{
				ans = mid;
				start = mid + 1;
			}
			if (arr[mid] > target) {
				end = mid - 1;
			}
			else if (arr[mid] < target)
			{
				start = mid + 1;
			}
		}
		return ans;
	}
	vector<int> search(vector<int>& arr, int start, int end, int searchClause) {
		if (arr.size() == 0)
		{
			vector<int> outp;
			outp.push_back(-1);
			outp.push_back(-1);
			return outp;
		}
		if (arr.size() == 1)
		{
			if (arr[0] == searchClause) {
				vector<int> outp;
				outp.push_back(1);
				outp.push_back(1);
				return outp;
			}
			else {
				vector<int> outp;
				outp.push_back(-1);
				outp.push_back(-1);
				return outp;
			}
		}
		if (start >= end) {
			if (arr[end] == searchClause) {
				vector<int> outp;
				outp.push_back(1);
				outp.push_back(1);
				return outp;
			}
			else {
				vector<int> outp;
				outp.push_back(-1);
				outp.push_back(-1);
				return outp;
			}
		}
		int mid = (end + start) / 2;
		if (arr[mid] == searchClause) {
			int firstPos = mid;
			int LastPos = mid;
			while (firstPos >= 0 && arr[firstPos] == searchClause)
			{
				firstPos--;
			}
			while (LastPos < arr.size() && arr[LastPos] == searchClause )
			{
				LastPos++;
			}
			vector<int> outp;
			outp.push_back(firstPos + 1);
			outp.push_back(LastPos - 1);
			return outp;
		}
		else if (arr[mid] > searchClause) {
			return search(arr, start, mid - 1, searchClause);
		}
		else
		{
			return search(arr, mid + 1, end, searchClause);
		}
	}
};

