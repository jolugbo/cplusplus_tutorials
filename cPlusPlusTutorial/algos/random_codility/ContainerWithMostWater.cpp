#include "vector";
using namespace std;
class ContainerWithMostWater {
public:
	ContainerWithMostWater(vector<int>& height) {
		const int size = 5;// height.size();
		vector<vector<int>> dp;
		for (int i = 0; i < height.size(); i++)
		{
			vector<int> row(height.size());
			dp.push_back(row);
		}
	}
};