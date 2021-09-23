#include <iostream>
using namespace std;
class Power {

public:
	Power() {

		int basenumber;
		int powernumber;
		cout << "input base number " << endl;
		cin >> basenumber;
		cout << "input power number " << endl;
		cin >> powernumber;
		cout << basenumber<< " to the power of "<< powernumber<<" is " << PowerCalculator(basenumber, powernumber) << endl;
	}
	int PowerCalculator(int base,int power) {
		if (power == 0)
			return 1;
		else
			return base * PowerCalculator(base, power - 1);
	}
};