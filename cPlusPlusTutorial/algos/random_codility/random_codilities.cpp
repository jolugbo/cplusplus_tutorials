#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
class random_codility {
public:
	int repeatedString(string s) {
		stringstream ss(s);
		vector<string> vect;
		while (ss.good())
		{
			string substr;
			getline(ss, substr, '.');
			vect.push_back(substr);
		}
		int maxSize = 0;
		for (int i = 0; i < vect.size(); i++)
		{
			stringstream ss(trim(vect[i]));
			int currentCount = 0;
			while (ss.good())
			{
				string substr;
				getline(ss, substr, ' ');
				currentCount++;
			}
			if (currentCount > maxSize)maxSize = currentCount;
		}
		return maxSize;
	}
    string trim(string& str)
	{
		str.erase(str.find_last_not_of(' ') + 1);         //suffixing spaces
		str.erase(0, str.find_first_not_of(' '));       //prefixing spaces
		return str;
	}
	string solution(string& message, int K) {
		// write your code in C++14 (g++ 6.2.0)
		string output = "";
		stringstream ss(message);
		vector<string> vect;
		while (ss.good())
		{
			string substr;
			getline(ss, substr, ' ');
			vect.push_back(substr);
			vect.push_back(" ");
		}
		for (int i = 0; i < vect.size(); i++)
		{
			int sizeCheck = K - vect[i].size();
			if (sizeCheck >= 0) {
				output = output + vect[i];
				K -= vect[i].size();
			}
			return output;
		}
		return output;
	}

	int solution2(vector<int>& A) {
		int sum = 0;
		int sum2 = 0;
		int count = 0;
		int size = A.size();
		for (long i = 0; i < size; i++)
		{
			sum += A[i];
		}
		sum2 = sum;
		sort(A.begin(), A.end());
		for (int i = size - 1; i >= 0; i--)
		{
			int calc1 = A[i] / 2;
			if ((sum2 - calc1) < sum / 2) {
				return count;
			}
			else
			{
				int calc = A[i] / 2;
				sum2 = sum2 - calc;
				count++;
			}
		}
		return count;
	}
};