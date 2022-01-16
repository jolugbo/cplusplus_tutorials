#include <vector>
#include <iostream>
using namespace std;
class LargestCombination {
public:
	int arr[5] = { 0 };
	 LargestCombination() {
		 vector<int> vec;
		 vec.push_back(3);
		 vec.push_back(7);
		 vec.push_back(4);
		 vec.push_back(6);
		 vec.push_back(5);
		 cout << "largest sum is -> " << compute(vec, 5) << endl;;
	}
	 int compute(vector<int> vec, int n) {
		 if (n == 1)return max(vec[0], 0);
		 else if (n == 2)return max(vec[1], compute(vec, n - 1));
		 else if (arr[n - 1] != 0) return arr[n - 1];
		 else {
			 int n1 = compute(vec, n - 1);
			 int n2 = compute(vec, n - 2);
			 arr[n - 1] = max(vec[n - 1] + n2, n1);
			 return arr[n - 1];
		 }
	 }
	 int compute2(vector<int> vec) {
		 if (vec.size() == 1)return max(vec.back(), 0);
		 vector<int> tab;
		 tab.resize(vec.size());
		 tab[0] = max(vec[0], 0);
		 tab[1] = max(vec[1], tab[0]);
		 for (int i = 2; i < vec.size(); i++)
		 {
			 tab[i] = max(vec[i] + tab[i - 2], tab[i - 1]);
		 }
		 return tab.back();
	 }
};