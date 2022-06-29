#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
class LongestUniqueLengthInString {
public:
     LongestUniqueLengthInString(string s) {
         int window = 0;
         int longest = 0;

         unordered_map<int, int> uo_map;

         for (int i = 0; i < s.size(); i++) {

             uo_map[s[i]]++;

             while (uo_map[s[i]] == 2) {
                 uo_map[s[window]]--;
                 window++;
             }

             longest = max(longest, i - window + 1);

         }

         cout << longest;
    }
};