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
		}
		compute(n, resp,0);
		for (int i = 0; i < resp.size(); i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << resp[i][j];
			}
		}
		//return resp;
	}

	void compute(int queenCount, vector<vector<string>>& respList, int CurrentQueenCount) {
		if (CurrentQueenCount > 0) {
			for (int i = 0; i < queenCount; i++)
			{
				if (i > 0) {
					if ((respList[i - 1][CurrentQueenCount - 1] != "Q") and (respList[i][CurrentQueenCount - 1] != "Q") and (respList[i][CurrentQueenCount + 1] != "Q")) {
						respList[i][CurrentQueenCount] = "Q";
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
	}


};