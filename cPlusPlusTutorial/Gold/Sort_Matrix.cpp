#include <algorithm>
#include <vector>
using namespace std;

class Sort_Matrix {
public:
	static bool compareInterval(vector<int>& v1, const vector<int>& v2)
	{
		return (v1[2] < v2[2]);
	}

	Sort_Matrix(int A, vector<vector<int> >& B) {
		sort(B.begin(), B.end(), compareInterval);
	}
};