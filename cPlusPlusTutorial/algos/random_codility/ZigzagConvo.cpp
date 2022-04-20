#include <iostream>
#include <unordered_map>
using namespace std;
class ZigzagConvo {
public:
	ZigzagConvo(string s, int numRows) {
		string returnString ;
		unordered_map<int, string> uo_map;
		
		for (int i = 0,j = 0; i < s.length(); i++)
		{
			if (j == numRows) {
				j--;
				while (j >0)
				{
					j--;
					uo_map[j] = uo_map[j] + s[i++];
					if (i >= s.length())break;
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
			string placeholder = uo_map[i];
			if (returnString.length() == 1) {
				returnString.resize(placeholder.length() + 2);
			}
			returnString.erase(std::find(returnString.begin(), returnString.end(), '\0'), returnString.end());
			returnString.append(placeholder);
			//std::string c = std::string(returnString) + placeholder;
			//returnString = current;
		}
	}
};