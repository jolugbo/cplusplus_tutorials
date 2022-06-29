#include <vector>
#include <unordered_map>
using namespace std;

class twoSums {

public:
    /*vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), -1));
        vector<int> resp;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (j == i) {}
                else if (nums[j] + nums[i] == target) {
                    resp.push_back(i);
                    resp.push_back(j);
                    return resp;
                }
            }
        }
        return resp;
    }*/
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> resp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(target - nums[i]) > 0) {
                resp.push_back(mp[nums[i]]);
                resp.push_back(mp[target - nums[i]]);
                return resp;
            }
        }
        return resp;
    }
};