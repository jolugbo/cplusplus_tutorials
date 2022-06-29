#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std; 
class lengthOfLongestSubstring {
public:
     lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0, right = 0;
        int length = 0;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
            while (mp[s[i]] == 2) {
                mp[s[left]]--;
                left++;
            }
            length = max(length, i - left + 1);
        }
        cout<< length;
    }
};