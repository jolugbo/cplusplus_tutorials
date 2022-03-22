#include <vector>
#include <iostream>
using namespace std;
class CommutableIsland {
public:
	//to be cont'd
	CommutableIsland(int A, vector<vector<int> >& B) {
		vector<vector<int> > output;
		int totalCost = 0;
		for (int i = 1; i <= A; i++)
		{
			vector<int> islandDetails = { i, 0, INT32_MAX };
			output.push_back(islandDetails);
		}
		for (int i = 0; i < B.size(); i++)
		{
			vector<int> islandDetails = B[i];
			int originIsland = islandDetails[0] - 1;
			int destinationIsland = islandDetails[1] - 1;
			int journeyCost = islandDetails[2];
			if (output[destinationIsland][2] > journeyCost) {
				output[destinationIsland][1] = originIsland;
				output[destinationIsland][2] = journeyCost;
			}
		}
		for (int i = 1; i < A; i++)
		{
			totalCost+=output[i][2];
		}
	}
};