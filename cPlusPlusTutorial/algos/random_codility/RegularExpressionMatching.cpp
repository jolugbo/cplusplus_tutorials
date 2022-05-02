#include <iostream>
#include <regex>
using namespace std;
class RegularExpressionMatching {
public:
	RegularExpressionMatching(string s, string p) {
		int lenS = s.size(), lenP = p.size();

		vector<vector<int>> dp(lenS + 1, vector<int>(lenP + 1,-1));
		cout << matchFound(s, p, 0, 0, lenS, lenP, dp);
	}

	bool matchFound(string s, string p, int start, int end, int lenS, int lenP, vector<vector<int>> dp) {
		if (start == lenS && end == lenP)return true;
		if (end == lenP) return false;
		if (start == lenS)
		{
			while (end != lenP)
			{
				if (p[end] == '*')end++;
				else if (end != lenP - 1 && p[end + 1] == '*')end += 2;
				else return false;
			}
			return true;
		}
		bool resp = false;
		if (dp[start][end] != -1)return dp[start][end];
		if (s[start] == p[end] || p[end] == '.') {
			if (end != lenP - 1 && p[end + 1] == '*')
				resp = matchFound(s, p, start, end + 2, lenS, lenP, dp) || matchFound(s, p, start + 1, end, lenS, lenP, dp);
			else {
				resp = matchFound(s, p, start + 1, end+1, lenS, lenP, dp);
			}
		}
		else if (end != lenS - 1 && p[end + 1] == '*') resp = matchFound(s, p, start, end + 2, lenS, lenP, dp);
		dp[start][end] = resp;
		return dp[start][end];
	}
};