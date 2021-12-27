#include<iostream>
using namespace std;
class LongestCommonSubsequence {
public:
	int calcLongestCommonSubsequence(string text1, string text2) {
		return calculator(text1, 0, text2, 0);
		 
	}
	int calculator(string text1,int text1PT, string text2, int text2PT ) {
		if (text1PT >= text1.length() || text2PT >= text2.length()) return 0;
		if (text1[text1PT] == text2[text2PT]) return 1 + calculator(text1, text1PT + 1, text2, text2PT + 1);
		else
		{
			return max(calculator(text1, text1PT + 1, text2, text2PT), calculator(text1, text1PT, text2, text2PT + 1));
		}
	}
};