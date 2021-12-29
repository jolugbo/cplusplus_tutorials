#include<iostream>
#include <unordered_map>
using namespace std;
class LongestCommonSubsequence {
public:
	int calcLongestCommonSubsequence(string text1, string text2) {
		unordered_map<string, int> mp;
		return calculator(text1, 0, text2, 0,mp);
		 
	}
	int calculator(string text1,int text1PT, string text2, int text2PT, unordered_map<string, int>& uo_map) {
		if (text1PT >= text1.length() || text2PT >= text2.length()) return 0;
		if (uo_map.count(text1.substr(text1PT) + text2.substr(text2PT)) > 0)return uo_map[text1.substr(text1PT) + text2.substr(text2PT)];
		if (text1[text1PT] == text2[text2PT]) {
			int ans = 1 + calculator(text1, text1PT + 1, text2, text2PT + 1, uo_map);
			uo_map[text1.substr(text1PT) + text2.substr(text2PT)] = ans;
			return ans;
		}
		else
		{
			return max(calculator(text1, text1PT + 1, text2, text2PT, uo_map), calculator(text1, text1PT, text2, text2PT + 1, uo_map));
		}
	}


	//works faster, but i have issues with the compiler type am using doesno't allow the us of non static declaration 0f array size
	/*int clac2(string text1, string text2) {
		int m = text1.size();
		int n = text2.size();
		int dynamicProgramming[m + 1][n + 1];
		for (int i = 0; i <= m; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				if (i == 0 || j == 0) {
					dynamicProgramming[i][j] = 0;
				}
				else if (text1[i - 1] == text2[j - 1])
				{
					dynamicProgramming[i][j] = 1 + dynamicProgramming[i - 1][j - 1];
				}
				else
				{
					dynamicProgramming[i][j] = max(dynamicProgramming[i - 1][j], dynamicProgramming[i][j - 1]);
				}
			}
		}
		return dynamicProgramming[m][n];
	}*/
};