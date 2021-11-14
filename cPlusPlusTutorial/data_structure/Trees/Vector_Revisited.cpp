#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Vector_Revisited {
	vector<int> *container = new vector<int>();
public:
	Vector_Revisited() {
		vector<int> content;
		content.push_back(100);
		content.push_back(20);
		content.push_back(30);
		//content[4] = 40; very bad don't use
		content.push_back(10);
		content.push_back(15);
		sort(content.begin(), content.end());
		for (size_t i = 0; i < content.size(); i++)
		{
			cout << content.at(i) << " ";
		}
	}
};