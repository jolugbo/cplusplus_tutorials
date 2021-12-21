#include <iostream>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;
class Unordered_Map {
public: 
	Unordered_Map() {
		pair<string, int> p("abc", 1);
		unordered_map<string, int> uo_map;
		uo_map.insert(p);
		uo_map["def"] = 2;
		cout << uo_map["def"] << endl;
		///cout << uo_map.at("xyz") << endl; generates out of bound error if key "xyz" does not exist
		if (uo_map.count("abcd") > 0)
		{
			cout <<"key abcd exist" << endl;
		}
		cout << "Count is " << uo_map.size() << endl;
		uo_map.erase("def");
		cout << "Count after deleting a key " << uo_map.size() << endl;
	}
	int countUnique(vector<int> input) {
		vector<int> output(input.size());
		unordered_map<int, int> store;
		for (int i = 0; i < input.size(); i++)
		{
			if (store.count(input[i]) == 0) {
				store[i] = input[i];
				output[i] = input[i];
			}
		}
		input = vector<int>();
		for (int i = 0; i < input.size(); i++)
		{
			input[i] = output[i];
		}
		return output.size();
	}
	void unordered_mapIteration(unordered_map<int, int> uMap) {

		//unordered_maps are not sorted
		for (unordered_map<int, int>::iterator iterator = uMap.begin(); iterator != uMap.end(); iterator++)
		{
			cout << iterator->first << " " << iterator->second << endl;
		}
		if (uMap.find(1) == uMap.end())
			cout << "key does not exist" << endl;
		else
			cout << "key exist" << endl;
		uMap.erase(1);
		if (uMap.find(1) == uMap.end())
			cout << "key does not exist" << endl;
		else
			cout << "key exist" << endl;
	}
	void mapIteration() {
		map<int, int> oMap;
		oMap[1] = 100;
		oMap[2] = 200;
		oMap[3] = 300;
		oMap[4] = 400;
		//maps are sorted
		for (map<int, int>::iterator iterator = oMap.begin(); iterator != oMap.end(); iterator++)
		{
			cout << iterator->first << " " << iterator->second << endl;
		}
		if (oMap.find(5) == oMap.end())
			cout << "key does not exist" << endl;
		else
			cout << "key exist" << endl;
	}
	void vectorIteration() {
		vector<int> vec;
		vec.push_back(1000);
		vec.push_back(100);
		vec.push_back(200);
		vec.push_back(300);
		vec.push_back(400);
		//maps are sorted
		cout << "iterators with vectors"<< endl;
		for (auto iterator = vec.begin(); iterator != vec.end(); iterator++)
		{
			cout << *iterator << endl;
		}
	}
	int findJudge(int n, vector<vector<int>> trust) {
		unordered_map<int, int> uMap;
		//trusters
		for (int i = 0; i < trust.size(); i++) {
			vector v = trust[i];
			uMap[v[0]] = v[1];
		}
		unordered_mapIteration(uMap);
		mapIteration();
		vectorIteration();
		return  -1;
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