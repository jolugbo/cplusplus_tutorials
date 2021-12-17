#include <string>
#include <vector>
#include <sstream>
using namespace std;
class random_codility {


	void repeatedString(string s) {
		stringstream ss(s);
		vector<string> vect;
		while (ss.good())
		{
			string substr;
			getline(ss, substr, '.');
			vect.push_back(substr);
		}
	}
};