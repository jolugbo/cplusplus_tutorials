#include <iostream>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;
class Unordered_Map {
public: 
	Unordered_Map() {
		unordered_map<string,int> uo_map;
		pair<string, int> p("abc", 1);
		uo_map.insert(p);
		uo_map["def"] = 2;
		cout << uo_map["def"]<<endl;
		if (uo_map.count("abcd") > 0)
		{
			cout <<"key abcd exist" << endl;
		}
		cout << "Count is " << uo_map.size() << endl;
		uo_map.erase("def");
		cout << "Count after deleting a key " << uo_map.size() << endl;
	}
};
class FirstUnique {
public:
	queue <int> q;
	map <int, int> cnt;
	FirstUnique(vector<int>& nums) {
		for (int i : nums) {
			cnt[i]++;
		}
		for (int i : nums) {
			if (cnt[i] == 1) {
				q.push(i);
			}
		}
	}
	int showFirstUnique() {
		while (!q.empty() && cnt[q.front()] > 1) q.pop();
		return q.empty() ? -1 : q.front();
	}
};