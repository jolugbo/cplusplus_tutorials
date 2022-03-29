#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
class CommutableIsland {
public:
	//to be cont'd
	static bool compareInterval(vector<int>& v1, const vector<int>& v2)
	{
		return (v1[2] < v2[2]);
	}
	int find(int a, vector<int> parentMatch) {
		while (parentMatch[a] != a)
		{
			a = parentMatch[a];
		}
		return a;
	}
	CommutableIsland(int A, vector<vector<int> >& B) {
		vector<int> pathCost(A + 1,INT32_MAX);
		vector<int> parentMatch(A + 1);
		unordered_map<int, vector<int>> set_map;
		for (int i = 1; i <= A; i++)
		{
			parentMatch[i] = i;
		}
		int totalCost = 0;
		sort(B.begin(), B.end(), compareInterval);
		for (int i = 0; i < B.size(); i++)
		{
			vector<int> islandDetails = B[i];
			int originIsland = islandDetails[0];
			int destinationIsland = islandDetails[1];
			pathCost[originIsland] = islandDetails[2];
			int parentOfOrigin = find(originIsland, parentMatch);
			int parentOfDestination = find(destinationIsland, parentMatch);
			if (parentOfOrigin != parentOfDestination)
			{
				totalCost += islandDetails[2];
				parentMatch[parentOfDestination] = parentMatch[parentOfOrigin];
				//vector<int> sets = set_map[parentOfOrigin];
				//set_map[parentOfOrigin].push_back(destinationIsland);
				/*if (pathCost[destinationIsland] < pathCost[originIsland])
				{
					parentMatch[originIsland] = parentMatch[destinationIsland];
					pathCost[destinationIsland] = islandDetails[2];
				}
				else
				{
					totalCost += islandDetails[2];
					parentMatch[destinationIsland] = parentMatch[originIsland];
				}*/
			}
			//int journeyCost = islandDetails[2];
		}
		cout << totalCost << endl;
		/*for (int i = 1; i < A; i++)
		{
			totalCost+=output[i][2];
		}*/
	}
};