#include <iostream>
#include <regex>
using namespace std;
class RegularExpressionMatching {
public:
	RegularExpressionMatching(string s, string p) {
		int lenS = s.size(), lenP = p.size();

		vector<vector<int>> dp(lenS + 1, vector<int>(lenP + 1,-1));
		cout << matchFound(s, p, lenS, lenP);
	}

	bool matchFound(string s, string p, int lenS, int lenP) {
		if (lenP == 0)
		{
			return lenS == 0;
		}
		if (lenP > 1 && p[1] == '*')
		{
			if (matchFound(s,p.substr(2),s.length(),p.substr(2).length()))
			{
				return true;
			}
			if ((s[0] == p[0] || p[0] == '.') && lenS > 0) {
				return matchFound(s.substr(1), p, s.substr(1).length(), p.length());
			}
			return false;
		}
		else
		{
			if ((s[0] == p[0] || p[0] == '.') && lenS > 0) {
				return matchFound(s.substr(1), p.substr(1), s.substr(1).length(), p.substr(1).length());
			}
			return false;
		}
		/*if (start >= lenS && end >= lenP)return true;
		if (end >= lenP)return false;
		if (dp[start][end] != -1) return dp[start][end];
		bool match = start < lenS and (s[start] == p[end] or p[end] == '.');
		if (end+1 < lenP and p[end+1] == '*')
		{
			return dp[start][end] = matchFound(s, p, start, end + 2, lenS, lenP, dp) or matchFound(s, p, start + 1, end, lenS, lenP, dp);
		}
		if(match) return dp[start][end] = matchFound(s, p, start + 1, end + 1, lenS, lenP, dp);
		return dp[start][end] = false;*/
		/*if (start == lenS && end == lenP)return true;
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
		else if (end != lenP - 1 && p[end + 1] == '*') resp = matchFound(s, p, start, end + 2, lenS, lenP, dp);
		dp[start][end] = resp;
		return dp[start][end];*/
	}
};