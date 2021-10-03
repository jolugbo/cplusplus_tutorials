#include <iostream>
using namespace std;
class GeometricSum {
public:
	GeometricSum() {

		int length;
		cout << "input Geometric length " << endl;
		cin >> length;
		cout << "Geometric sum is " << GeometricSumCalculator(length) << endl;
	}
	double GeometricSumCalculator(int len) {
		if (len == 0)
			return 1;
		else {
			double sum = 1.0 / pow(2, len);
			return sum + GeometricSumCalculator(len - 1);
		}
	}
};