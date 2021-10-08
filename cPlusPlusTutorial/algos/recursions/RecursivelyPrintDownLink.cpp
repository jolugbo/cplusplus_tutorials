#include <iostream>
using namespace std;
class RecursivelyPrintDownLink {
public:
	RecursivelyPrintDownLink() {
		int n;
		cout<<"input stairs count"<<endl;
		cin >> n;
		cout << "number of ways to reach " << n << " is " << PrintDownLink(n);
	}
	int PrintDownLink(int count) {
		if (count == 0 || count == 1) {
			return 1;
		}
		if (count == 2) {
			return 2;
		}
		return PrintDownLink(count - 1) + PrintDownLink(count - 2) + PrintDownLink(count - 3);
	}
};