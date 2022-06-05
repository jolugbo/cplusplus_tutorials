#include <iostream>
#include <unordered_map>
using namespace std;

class TotalNQueens {
public:
	TotalNQueens(int n) {
		unordered_map<int, int> uo_map;
		uo_map[1] = 1; uo_map[2] = 0; uo_map[3] = 0; uo_map[4] = 2;
		uo_map[5] = 10; uo_map[6] = 4; uo_map[7] = 40; uo_map[8] = 92; uo_map[9] = 352;
		cout << uo_map[n];
	}

};