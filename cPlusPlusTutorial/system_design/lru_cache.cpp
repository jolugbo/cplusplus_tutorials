#include <map>;
#include <list>;
using namespace std;
class lru_cache {
public:
	map<int, int> pairs;
	list<int> ls;
	int capacity;
	lru_cache(int count) {
		pairs.clear();
		ls.clear();
		capacity = count;
	}
	int get(int key) {
		if (pairs.find(key) == pairs.end()) return -1;
		ls.remove(key);
		ls.push_front(key);
		return pairs[key];
	}
	void put(int key, int value) {
		if (pairs.find(key) == pairs.end()) {
			if (ls.size() == capacity) {
				int last = ls.back();
				ls.pop_back();
				pairs.erase(last);
			}
			ls.push_front(key);
		}
		else {
			ls.remove(key);
			ls.push_front(key);
		}
		pairs[key] = value;
	}
};