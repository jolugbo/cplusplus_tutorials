#include <vector>
#include <iostream>
using namespace std;
class Vector_Revisited {
	vector<int> *container = new vector<int>();
public:
	Vector_Revisited() {
		vector<int> content;
		content.push_back(10);
		content.push_back(20);
		content.push_back(30);
		//content[4] = 40; very bad don't use
		content.push_back(40);
		content.push_back(50);
		for (size_t i = 0; i < length; i++)
		{
			cout << content[i] << " ";
		}
		cout << content[1];
		cout << content[2];
		cout << content[3];
		cout << content[4];
	}
};