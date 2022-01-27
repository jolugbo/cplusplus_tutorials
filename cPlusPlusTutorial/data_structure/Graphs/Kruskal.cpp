#include <vector>
using namespace std;
//for solving minimum spanning tree problem
class Kruskal {
	vector<vector<int>>  Graph;
	int* parent;
public:
	Kruskal(vector<vector<int>>  matrix) {
		Graph = matrix;
	}

	void MakeSet(int i) {
		parent[i] = i;
	}

	void Union(int x, int y) {
		int xParent = Find(x);
		int yParent = Find(y);
		parent[yParent] = xParent;
	}

	int Find(int i) {
		while (parent[i] != i) {
			i = parent[i];
		}
		return i;
	}
};