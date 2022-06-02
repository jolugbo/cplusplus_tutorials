#include <iostream>
#include <vector>
using namespace std;

class MatrixTranspose {
public:
	MatrixTranspose(vector<vector<int>>& matrix) {
		int len = matrix.size();
		int size = matrix[0].size();
		vector<vector<int>> resp;
		for (int i = 0; i < size; i++)
		{
			vector<int> row;
			for (int j = 0; j < matrix.size(); j++)
			{
					row.push_back(matrix[j][i]);
			}
			resp.push_back(row);
		}

	}
};