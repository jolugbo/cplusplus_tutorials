#include <vector>;
#include <iostream>
#include <iomanip>
using namespace std;
class plusMinus {
public:
	plusMinus(vector<int> input) {
		float positiveCount = 0;
		float negativeCount = 0;
		float zeroCount = 0;
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] == 0)zeroCount++;
			else if (input[i] > 0)positiveCount++;
			else if (input[i] < 0)negativeCount++;
		}
		double positiveRatio = positiveCount/ input.size();
		double negativeRatio = negativeCount/ input.size();
		double zeroRatio = zeroCount/ input.size();
		cout << fixed << setprecision(6) << positiveRatio <<endl;
		cout << fixed << setprecision(6) << negativeRatio << endl;
		cout << fixed << setprecision(6) << zeroRatio << endl;
	}
};