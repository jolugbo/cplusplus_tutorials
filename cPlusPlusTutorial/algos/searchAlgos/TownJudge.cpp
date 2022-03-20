#include <vector>
#include <unordered_map>
using namespace std;

class TownJudge {
public:
	int findJudge(int n, vector<vector<int>>& pairs) {
		if (pairs.size() == 0 && n == 1) return 1;
		unordered_map<int, vector<int>> judge_map;
		unordered_map<int, bool> citizens_map;
		for (int j = 0; j < pairs.size(); j++)
		{
			vector<int> pair = pairs[j];
			if (!judge_map.count(pair[1])) {
				vector<int> citizens;
				citizens.push_back(pair[0]);
				judge_map[pair[1]] = citizens;
			}
			else {
				vector<int> citizens = judge_map[pair[1]];
				citizens.push_back(pair[0]);
				judge_map[pair[1]] = citizens;
			}
			if (!citizens_map.count(pair[0]))
				citizens_map[pair[0]] = true;
		}
		for (int i = 1; i <= n; i++)
		{
			if (judge_map.count(i) && !citizens_map.count(i)) {
				vector<int> Citizens = judge_map[i];
				if (Citizens.size() == (n - 1))
					return i;
			}
		}
		return -1;
	}

};