#include <iostream>
#include <vector>
using namespace std;

class MyAtoi {
public:
	MyAtoi(string s) {
		s.erase(0, s.find_first_not_of(" \n\r\t"));
		s.erase(s.find_last_not_of(" \n\r\t") + 1);
		bool isNegative = false;
		vector<int> holder;
		if (s[0] =='-')
		{
			isNegative = true;
		}
		for (int i = 0; i < s.length(); i++)
		{
			int num = 1;
			if (isNegative && i == 0)
			{
				return;
			}
			else
			{
				if (isdigit(s[i]))
				{
					holder.push_back(s[i]);
				}
			}
		}
	}
};