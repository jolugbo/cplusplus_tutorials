#include <vector>
#include <iostream>
using namespace std;

class SolveNQueens {
public:
	SolveNQueens(int n) {

		vector<vector<string>> resp;
		if (n == 1) {
			vector<string> val = { "Q" };
			resp.push_back(val);
			//return resp;
		}
		else {
			int CurrentQueenCount = 0;
			for (int j = 0; j < n; j++)
			{
				vector<string> val(n,".");
				resp.push_back(val);
			}
			compute(n, resp, CurrentQueenCount);
			for (int i = 0; i < resp.size(); i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << resp[i][j];
				}
			}
			//return resp;
		}
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