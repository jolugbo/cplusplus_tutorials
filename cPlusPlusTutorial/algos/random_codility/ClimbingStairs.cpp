#include <unordered_map>
using namespace std;
class ClimbingStairs {
public:
    int climbStairs(int n) {
        unordered_map<int, int> mp;
        return countSteps(n ,mp);
    }

    int countSteps(int n, unordered_map<int, int>& uo_map) {
        if (n < 0) return 0;
        if (n == 1 || n == 0) return 1;
        if (n == 2) return 2;
        if (uo_map.count(n) > 0)return uo_map[n];
        int stepCounts = countSteps(n - 1, uo_map) + countSteps(n - 2, uo_map);
        uo_map[n] = stepCounts;
        return  stepCounts;
    }
    
};