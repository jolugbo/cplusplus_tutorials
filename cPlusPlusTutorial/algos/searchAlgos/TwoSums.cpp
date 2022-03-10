#include "vector"
#include <unordered_map>
#include <iostream>
using namespace std;

class TwoSums {
public:
	TwoSums(vector<int> list, int target) {
		unordered_map<int, int> uo_map;
		for (int i = 0; i < list.size(); i++)
		{
			int diff = target - list[i];
			bool exist = uo_map.count(diff);
			if (exist)
			{
				// got a valid output
				cout << uo_map[diff] << " and " << i;
				break;
			}
			else
			{
				uo_map[list[i]] = i;
			}
		}
	}
};