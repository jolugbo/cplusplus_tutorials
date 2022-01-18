#include <vector>
#include <iostream>
using namespace std;
class Adjacent_Matrix_Graph {
public:
	Adjacent_Matrix_Graph(int vertices,int edges) {
		vector<vector<int>>matrix(vertices,vector<int>(vertices,0));
		for (int i = 0; i < edges; i++)
		{
			int fv, sv;
			cin >> fv >> sv;
			matrix[fv][sv] = 1;
			matrix[sv][fv] = 1;
		}
	}
};