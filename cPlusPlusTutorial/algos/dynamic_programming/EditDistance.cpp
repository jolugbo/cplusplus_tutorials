#include<iostream>
#include <vector>
using namespace std;
class EditDistance {
public:
	//works faster, but i have issues with the compiler type am using doesn't allow the use of non static declaration 0f array size

	int editDistance(string word1,string word2) {
		int len1 = word1.size();
		int len2 = word2.size();
		//int dynamicArrangment[len1 + 1][len2 + 1];
		vector < vector<int>> dynamicArrangment(len1 + 1, vector<int>(len2 + 1));
		for (int i = 0; i <= len1; i++)
		{
			for (int j = 0; j <= len2; j++)
			{
				if (i == 0) dynamicArrangment[i][j] = j;
				else if (j == 0)dynamicArrangment[i][j] = i;
				else if (word1[i - 1] == word2[j - 1]) dynamicArrangment[i][j] = dynamicArrangment[i - 1][j - 1];
				else {
					int insert = dynamicArrangment[i][j - 1];
					int deleting = dynamicArrangment[i - 1][j];
					int replacing = dynamicArrangment[i - 1][j - 1];
					dynamicArrangment[i][j] = 1 + min(insert, min(deleting, replacing));
				}
			}
		}
		 return dynamicArrangment[len1][len2];
	}
	int calcEditDistance(string word1,int word1Len, string word2, int word2Len) {
		if (word1Len == 0)return word2Len;
		if (word2Len == 0)return word1Len;
		if (word1[word1Len - 1] == word2[word2Len - 1])
		{
			return calcEditDistance(word1, word1Len - 1, word2, word2Len - 1);
		}
		int insert = calcEditDistance(word1, word1Len, word2, word2Len - 1);
		int deleteOne = calcEditDistance(word1, word1Len - 1, word2, word2Len);
		int replace = calcEditDistance(word1, word1Len - 1, word2, word2Len - 1);
		return 1 + min(insert, min(deleteOne, replace));
	}
	/*int calcEditDistance2(string word1, string word2) {
		int m = word1.size();
		int n = word2.size();
		int dp[n + 1][m + 1];
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= m; j++)
			{
				if (i == 0 || j == 0)
				{
					dp[i][j] = 0;
				}
				else if (word1[j - 1] == word2[i - 1]) dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
				else if (word1[j - 1] != word2[i - 1]) {
					dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= m; j++)
			{
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}
		int output = dp[n][m];
		return output;
	}*/
};
//Input: word1 = "horse", word2 = "ros"
//Output : 3
//Explanation :
//	horse->rorse(replace 'h' with 'r')
//	rorse->rose(remove 'r')
//	rose->ros(remove 'e')
//	Example 2 :
//
//	Input : word1 = "intention", word2 = "execution"
//	Output : 5
//	Explanation :
//	intention->inention(remove 't')
//	inention->enention(replace 'i' with 'e')
//	enention->exention(replace 'n' with 'x')
//	exention->exection(replace 'n' with 'c')
//	exection->execution(insert 'u')