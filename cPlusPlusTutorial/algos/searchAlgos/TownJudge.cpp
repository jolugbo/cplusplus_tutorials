#include <vector>
#include <unordered_map>
using namespace std;

class TownJudge {
public:
	int findJudge(int n, vector<vector<int>>& pairs) {
		unordered_map<int, vector<int>> judge_map;
		unordered_map<int, bool> citizens_map;
		for (int i = 1; i <= n; i++)
		{
			vector<int> Citizens;
			for (int j = 0; j < pairs.size(); j++)
			{
				vector<int> pair = pairs[j];
				if (pair[1] == i)
					Citizens.push_back(pair[0]);
				if (!citizens_map.count(pair[0]))
					citizens_map[pair[0]] = true;
			}
			judge_map[i] = Citizens;
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