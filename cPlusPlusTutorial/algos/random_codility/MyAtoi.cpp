#include <iostream>
#include <vector>
using namespace std;

class MyAtoi {
public:
	MyAtoi(string s) {
		s.erase(0, s.find_first_not_of(" \n\r\t"));
		s.erase(s.find_last_not_of(" \n\r\t") + 1);
		bool isNegative = false;
		vector<char> holder;
		string output;
		if (s[0] =='-')
		{
			isNegative = true;
		}
		for (int i = 0; i < s.length(); i++)
		{
			if (!isNegative && i != 0)
			{
				if (isdigit(s[i]))
				{
					holder.push_back(s[i]);
				}
				else break;
			}
		}
		for (int i = 0; i < holder.size(); i++)
		{
			output += holder[i];
		}
		unsigned int result = isNegative? atoi('-'+output.c_str()): atoi(output.c_str());
		if (holder.size() == 0)
		{
			result = 0;
		}
	}
};