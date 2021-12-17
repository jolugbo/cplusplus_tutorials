#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
class MajorityElement {


public:
	MajorityElement() {
		//searchRange();
	}

	void searchRange() {
		vector<int> nums;
		nums.push_back(4);
		nums.push_back(7);
		nums.push_back(4);
		nums.push_back(4);
		nums.push_back(7);
		nums.push_back(4);
		nums.push_back(4);
		nums.push_back(9);
		nums.push_back(4);
		nums.push_back(3);
		majority(nums);
		//return outp;
	}

	void majority(vector<int>& arr) {
		int majortyElement = arr[0];
		int count = 0;
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] == majortyElement)
				count++;
			else
			{
				count--;
				if (count == 0)
				{
					majortyElement = arr[i];
					count++;
				}
			}
		}
		cout << majortyElement;
	}
};
