#include <iostream>
using namespace std;
class RecursiveTowerOfHanoi {
public:
	RecursiveTowerOfHanoi() {
		int n;
		cout << "input tower height" << endl;
		cin >> n;
		cout << "number of steps required to transfer  " << n << " is " << TowerOfHanoi(n)<<endl;
		cout << "with below movemnt  "<<endl;
		printSteps(n,"Source","Destination", "Helper");
	}
	int TowerOfHanoi(int count){
		if (count == 0)
		{
			return 0;
		}
		return TowerOfHanoi(count - 1) + 1 + TowerOfHanoi(count - 1);
	}
	void printSteps(int n, string source, string destination, string helper) {
		if (n == 0)
			return;
		printSteps(n - 1, source, helper, destination);
		cout << "move disk " << n << " from " << source << " to " << destination<<endl;
		printSteps(n - 1, helper, destination, source);
	}
};