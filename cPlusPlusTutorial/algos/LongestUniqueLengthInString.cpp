#include <iostream>
#include <unordered_map>
using namespace std;
class LongestUniqueLengthInString {
public:
     LongestUniqueLengthInString(string s) {
        int longest = 0;
        //for(int i = 0; i < s.length(); i++)
        //{
        //    for (int j = i; j < s.length(); j++)
        //    {
        //        unordered_map<char, int> uo_map;
        //        int count = 0;
        //        for (int k = i; k < j; k++)
        //        {
        //            if (uo_map.count(s[k]) < 1)
        //            {
        //                uo_map[s[k]] = 1;
        //                count++;
        //            }
        //            else
        //            {
        //                count = 0;
        //                break;
        //            }
        //        }
        //        longest = count > longest ? count : longest;
        //    }
        //   /* if (uo_map.count(s[i]) > 0)
        //    {

        //    }
        //    else
        //    {
        //        uo_map[s[i]] = 1;
        //        count++;
        //    }*/
        //}
        string output;
        RecursivelygetSubString(s, output, longest);
        cout << longest;
    }
     void RecursivelygetSubString(string input, string output,int longest) {
         if (input.length() == false)
         {
             unordered_map<char, int> uo_map;
             if (output.length() > longest)
             {
                 for (int i = 0; i < output.length(); i++)
                 {
                   if (uo_map.count(output[i]) < 1)
                    {
                        uo_map[output[i]] = 1;
                    }
                 }
             }
             longest = uo_map.size() == output.size() ? output.size() : longest;
             cout << output << endl;
             return;
         }
         else
         {
             RecursivelygetSubString(input.substr(1), output, longest);
             RecursivelygetSubString(input.substr(1), output + input[0], longest);
         }
     }
};