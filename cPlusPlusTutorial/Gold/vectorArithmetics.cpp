#include <vector>
#include <iostream>
#include <numeric>
#include <cstdint>
#include <limits>
using namespace std;
class vectorArithmetics {
public:
	vectorArithmetics() {

	}
	void vectorAccumulate(vector<int> input) {
		cout<< accumulate(input.begin(), input.end(), 0);
	}
	void lcmCalculator(int a, int b) {
		cout << lcm(a, b);
	}
	void divisionAndQuotientCalculator(int a, int b) {
		cout << div(a, b).quot;
		cout << div(a, b).rem;
	}

	//populate a vector with an incremental value from a starting point
	void iotaCalculator(int length, int startingPoint) {
		vector<int> input(length);
		iota(input.begin(), input.end(), startingPoint);
		for (int i = 0; i < length; i++)
		{
			cout << input[i];
		}
	}
};