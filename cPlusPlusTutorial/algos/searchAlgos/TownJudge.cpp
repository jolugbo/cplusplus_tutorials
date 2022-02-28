#include <vector>
#include <unordered_map>
using namespace std;

class TownJudge {
public:
	int findJudge(int n, vector<vector<int>>& trust) {
		unordered_map<int, int> uo_map;
		for (int i = 0; i < trust.size(); i++)
		{
			vector<int> Citizens;
			Citizens = trust[i];
			if (!uo_map.count(Citizens[i]) > 0) {
				vector<int> v = trust[i];
				uo_map[v[0]] = uo_map[v[0]] + 1;
			}
		}

		for (int i = 0; i < trust.size(); i++)
		{
			vector<int> potentialJudges = trust[i];
			if (uo_map.count(potentialJudges[1]) < 1) {
				return potentialJudges[1];
			}
		}
		return -1;

	}

};