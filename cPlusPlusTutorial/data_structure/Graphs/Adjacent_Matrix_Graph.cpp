#include <vector>
#include <iostream>
using namespace std;
class Adjacent_Matrix_Graph {
public:
	Adjacent_Matrix_Graph(int vertices,int edges) {
		vector<vector<int>>matrix(vertices,vector<int>(vertices,0));
		for (int i = 1; i <= edges; i++)
		{
			int fv, sv;
			cin >> fv >> sv;
			matrix[fv][sv] = 1;
			matrix[sv][fv] = 1;
		}
		vector<bool> visited(vertices,false);
		printGraph(matrix, 0, visited);
	}
	void printGraph(vector<vector<int>> matrix, int startingVertics, vector<bool>& visited) {
		cout << startingVertics;
		int size = matrix.size();
		visited[startingVertics] = true;
		for (int i = 0; i < size; i++)
		{
			if (matrix[startingVertics][i] == 1 && visited[i] == false)
			{
				printGraph(matrix, i, visited);
			}
		}
	}
};