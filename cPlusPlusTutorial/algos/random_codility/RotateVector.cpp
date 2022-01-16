#include <vector>
#include <iostream>
using namespace std;
class RotateVector {
public:
	RotateVector(vector<int> vec, int amt) {
		amt = amt / vec.size() + (amt % vec.size());
		
		rotate ( vec.begin(), vec.begin() - amt, vec.end());
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec.at(i) << " ";
		}
	}
};