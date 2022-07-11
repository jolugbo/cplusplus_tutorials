#include <iostream>
#include <string>
using namespace std;

class TimeConversion {
public:
	TimeConversion(string s) {

		if (s.find("AM") != std::string::npos) {
			if (s.substr(0, 2) == "12") {
				s[0] = '0';
				s[1] = '0';
			}
		}
		else if (s.find("PM") != std::string::npos) {
			int hour = atoi(s.substr(0, 2).c_str());
			string holder;
			if (hour < 12) {
				hour += 12;
				holder = "0" + to_string(hour);
			}
			else {
				holder[0] = to_string(hour)[0];
				holder.push_back(to_string(hour)[0]);
				holder.push_back(to_string(hour)[1]);
			}
			s[0] = holder[0];
			s[1] = holder[1];
		}
		/*s[s.size() - 1] = '\0';
		s[s.size() - 2] = '\0';*/

		cout<< s.substr(0, s.length()-2);
	}
};