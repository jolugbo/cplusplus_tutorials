using namespace std;
template<typename V>
class HashMapNode {
public:
	string key;
	V value;
	HashMapNode* next;
	HashMapNode(string key V value) {
		this->key = key;
		this->value = value;
		next = NULL;
	}
	~HashMapNode() {
		delete next;
	}
};

template<typename V>
class HashMap {
private:
	HashMapNode<V>** buckets;
	int count;
	int numBuckets;
public:
	HashMap() {
		count = 0;
		numBucket = 5;
		buckets = new HashMapNode<V>*[numBuckets];
	}
	~HashMap() {
		for (int i = 0; i < numBuckets; i++)
		{
			delete buckets[i];
		}
		delete []buckets;
	}
	int size() {
		return count;
	}

	V getValue(string key) {
	
	}

	void insert(string key, V value) {
	
	}

	void remove(string key) {
	
	}
};