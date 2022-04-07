#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct computer {
    int pointer;
    vector<vector<int>> outPair;
    vector<vector<int>> inFromPair;
    int counter = 0;
    computer(int currentPointer, vector<vector<int>> currentOutPair, vector<vector<int>> currentInFromPair, int currentCounter) {
        pointer = currentPointer;
        outPair = currentOutPair;
        inFromPair = currentInFromPair;
        counter = currentCounter;
    }
};
class TopologicalSort {
public:
    static bool compareInterval(vector<int>& v1, const vector<int>& v2)
    {
        return (v1[0] < v2[0]);
    }
    static bool compareInterval2(computer& v1, const computer& v2)
    {
        return (v1.inFromPair.size() < v2.inFromPair.size());
    }
   

    TopologicalSort(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<vector<int>>> computer;

         vector<int> in_linksCount(numCourses,0);
         vector<int> out_linksCount(numCourses, 0);
         queue<int> searchQueue;
         bool out = 0;
         sort(prerequisites.begin(), prerequisites.end(), compareInterval);
         vector<int> currentPair = prerequisites[0];
         searchQueue.push(currentPair[0]);
         for (int i = 0; i < prerequisites.size(); i++)
         {
             if (currentPair[0] == prerequisites[i][0])
             {
                 in_linksCount[currentPair[0]]++;
             }
             else
             {
                 searchQueue.push(currentPair[0]);
                 currentPair = prerequisites[i];
                 in_linksCount[currentPair[0]]++;
             }
             out_linksCount[currentPair[1]]++;
         }
         if (searchQueue.size() == 0)
         {
             out = false;
         }
         else
         {

         }
         //currentPair = prerequisites[0];
         //for (int i = 0; i < prerequisites.size(); i++)
         //{
         //    if (currentPair[0] == prerequisites[i][0])
         //    {
         //        in_linksCount[currentPair[0]]--;
         //    }
         //    else
         //    {
         //        currentPair = prerequisites[i];
         //        in_linksCount[currentPair[0]]--;
         //    }
         //    out_linksCount[currentPair[1]]--;
         //}
         //for (int i = 0; i < in_linksCount.size(); i++)
         //{
         //    if (in_linksCount[i] != 0 )
         //    {
         //        //return false;
         //        out = false;
         //    }
         //    if (out_linksCount[i] != 0)
         //    {
         //        //return false;
         //        out = false;
         //    }
         //}
         cout << out;
    }
};