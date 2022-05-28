#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class MissingNumber {
public:
     MissingNumber(vector<int>& nums) {
         cout<< calc(nums);
    }
     int calc(vector<int>& nums) {
         if (nums.size() == 1 and nums[0] == 0) return 1;
         if (nums.size() == 1 and nums[0] == 1) return 0;
         sort(nums.begin(), nums.end());
         int resp = 0;
         for (int i = 0; i < nums.size(); i++)
         {
             if (i != nums[i])
             {
                 return i;
             }
         }
         if ((resp == 0 and nums.size() != 1))return nums.size();
         else
             return resp;
     }
};