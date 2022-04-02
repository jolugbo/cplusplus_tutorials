#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class TopologicalSort {
public:
    static bool compareInterval(vector<int>& v1, const vector<int>& v2)
    {
        return (v1[0] < v2[0]);
    }

    TopologicalSort(int numCourses, vector<vector<int>>& prerequisites) {
         vector<int> in_linksCount(numCourses,0);
         vector<int> out_linksCount(numCourses,0);
         sort(prerequisites.begin(), prerequisites.end(), compareInterval);
         vector<int> currentPair = prerequisites[0];
         for (int i = 0; i < prerequisites.size(); i++)
         {
             if (currentPair[0] == prerequisites[i][0])
             {
                 in_linksCount[currentPair[0]]++;
             }
             else
             {
                 currentPair = prerequisites[i];
                 in_linksCount[currentPair[0]]++;
             }
             out_linksCount[currentPair[1]]++;
         }
         currentPair = prerequisites[0];
         for (int i = 0; i < prerequisites.size(); i++)
         {
             if (currentPair[0] == prerequisites[i][0])
             {
                 in_linksCount[currentPair[0]]--;
             }
             else
             {
                 currentPair = prerequisites[i];
                 in_linksCount[currentPair[0]]--;
             }
             out_linksCount[currentPair[1]]--;
         }
         bool out = 0;
         for (int i = 0; i < in_linksCount.size(); i++)
         {
             if (in_linksCount[i] != 0 )
             {
                 //return false;
                 out = false;
             }
             if (out_linksCount[i] != 0)
             {
                 //return false;
                 out = false;
             }
         }
         cout << out;
    }
};