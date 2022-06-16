#include <vector>
#include <iostream>
using namespace std;

class SolveNQueens {
public:
	SolveNQueens(int n) {

		vector<vector<string>> matrix;
		for (int i = 0; i < n; i++)
		{
			vector<string> row(n);
			matrix.push_back(row);
		}
		compute2(matrix, 0);
		cout << "done";
		//if (n == 1) {
		//	vector<string> val = { "Q" };
		//	resp.push_back(val);
		//	//return resp;
		//}
		//else {
		//	int CurrentQueenCount = 0;
		//	for (int j = 0; j < n; j++)
		//	{
		//		vector<string> val(n,".");
		//		resp.push_back(val);
		//	}
		//	compute(n, resp, CurrentQueenCount);
		//	for (int i = 0; i < resp.size(); i++)
		//	{
		//		for (int j = 0; j < n; j++)
		//		{
		//			cout << resp[i][j];
		//		}
		//	}
		//	//return resp;
		//}
	}
	bool compute2(vector<vector<string>>& respList,int columnCount) {
		int size = respList.size();
		if (columnCount >= size)
		{
			return true;
		}
		for (int i = 0; i < size; i++)
		{
			if (isSafe(respList, i, columnCount)) {
				respList[i][columnCount] = "Q";
				if (compute2(respList,columnCount + 1))
				{
					return true;
				}
				respList[i][columnCount] = ".";
			}
		}
	}

	bool isSafe(vector<vector<string>>& respList, int row,int column) {
		int i, j;
		int size = respList.size();
		for (int i = column; i >= 0; i--)
		{
			if (respList[row][i] == "Q")
			{
				return false;
			}
		}
		for (int i = row, j = column; i >= 0 && j >= 0; i--, j--)
		{
			if (respList[row][column] == "Q")
			{
				return false;
			}
		}
		for (int i = row, j = column; i <= size && j >= 0; i++, j--)
		{
			if (respList[row][column] == "Q")
			{
				return false;
			}
		}
		return true;
	}
	void compute(int queenCount, vector<vector<string>>& respList, int& CurrentQueenCount) {
		if (CurrentQueenCount > 0) {
			for (int i = 0; i < queenCount; i++)
			{
				if (i > 0) {
					if ((respList[CurrentQueenCount - 1][i - 1] != "Q") and (respList[CurrentQueenCount - 1][i] != "Q") and (respList[CurrentQueenCount + 1][i] != "Q")) {
						respList[CurrentQueenCount][i] = "Q";
						CurrentQueenCount++;
						if (CurrentQueenCount == queenCount) {
							return;
						}
						else
						{
							compute(queenCount, respList, CurrentQueenCount);
						}
					}
				}


			}
		}
		else
		{
			for (int i = 0; i < queenCount; i++)
			{
				respList[CurrentQueenCount][i] = "Q";
				CurrentQueenCount++;
				compute(queenCount, respList, CurrentQueenCount);
				if (CurrentQueenCount < queenCount) {
					respList[i][CurrentQueenCount] = "";
					CurrentQueenCount--;
				}
			}
		}
	}


};