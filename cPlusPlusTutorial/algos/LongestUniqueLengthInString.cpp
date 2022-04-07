#include <iostream>
#include <unordered_map>
using namespace std;
class LongestUniqueLengthInString {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> uo_map;
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if (uo_map.count(s[i]) > 0)
            {

            }
            else
            {
                uo_map[s[i]] = 1;
                count++;
            }
        }
        cout << count;
    }
};