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

	CommutableIsland(int A, vector<vector<int> >& B) {
		vector<vector<int> > output;
		unordered_map<int, vector<int>> route_path_map;
		int totalCost = 0;
		sort(B.begin(), B.end(), compareInterval);
		for (int i = 0; i < A - 1; i++)
		{
			vector<int> islandDetails = B[i];
			totalCost += islandDetails[2];
			int originIsland = islandDetails[0] - 1;
			int destinationIsland = islandDetails[1] - 1;
			int journeyCost = islandDetails[2];
			cout << islandDetails[0] << " " << islandDetails[1] << " " << islandDetails[2] <<endl;
		}
		/*for (int i = 1; i < A; i++)
		{
			totalCost+=output[i][2];
		}*/
	}
};