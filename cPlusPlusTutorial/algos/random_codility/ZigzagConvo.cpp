#include <iostream>
#include <unordered_map>
using namespace std;
class ZigzagConvo {
public:
	ZigzagConvo(string s, int numRows) {
		string returnString = "";
		unordered_map<int, string> uo_map;
		
		for (int i = 0,j = 0; i < s.length(); i++)
		{
			if (j == numRows) {
				j--;
				while (j >0)
				{
					j--;
					uo_map[j] = uo_map[j] + s[i++];
				}
				j++; i--;
			}
			else
			{
				uo_map[j] = uo_map[j] + s[i];
				j++;
			}
		}
		for (int i = 0; i < numRows; i++)
		{
			string placeholder = std::string(uo_map[i]);
			//returnString.append(placeholder);
			std::string c = std::string(returnString) + placeholder;
			returnString = c;
		}
	}
};