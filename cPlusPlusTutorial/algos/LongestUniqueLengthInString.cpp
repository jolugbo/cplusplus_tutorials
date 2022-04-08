#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
class LongestUniqueLengthInString {
public:
    static bool compareInterval(string v1, const string v2)
    {
        return (v2.length() < v1.length());
    }
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
        vector<string> outputList;
        RecursivelygetSubString(s, output, outputList);
        sort(outputList.begin(), outputList.end(),compareInterval);
        for (int i = 0; i < outputList.size(); i++)
        {
            cout << outputList[i] << endl;
           /* unordered_map<char, int> uo_map;
            int currentSize = outputList[i].size();
            if(currentSize <= )
            if (uo_map.count(output[i]) < 1)
            {
                uo_map[output[i]] = 1;
            }*/
        }
        cout << longest;
    }
     void RecursivelygetSubString(string input, string output, vector<string>& outputList) {
         if (input.length() == false)
         {
           
             outputList.push_back(output);
             //longest = uo_map.size() == output.size() ? output.size() : longest;
             
             return;
         }
         else
         {
             RecursivelygetSubString(input.substr(1), output, outputList);
             RecursivelygetSubString(input.substr(1), output + input[0], outputList);
         }
     }
};