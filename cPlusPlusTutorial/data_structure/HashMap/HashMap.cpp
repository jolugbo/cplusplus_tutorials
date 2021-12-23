#include <iostream>
using namespace std;
template<typename V>
class HashMapNode {
public:
	string key;
	V value;
	HashMapNode* next;
	HashMapNode(string key, V value) {
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
	int bucketSize;
	int getBucketIndex(string key) {
		int hashCode = 0;
		int base = 1;
		int prime = 37;
		for (int i = key.size() - 1; i >= 0; i--)
		{
			hashCode += key[i] * base;
			base = base * prime;
			hashCode = hashCode % bucketSize;
			base = base % bucketSize;
		}
		return hashCode % bucketSize;
	}
public:
	HashMap() {
		count = 0;
		bucketSize = 5;
		buckets = new HashMapNode<V>*[bucketSize];
		for (int i = 0; i < bucketSize; i++)
		{
			buckets[i] = NULL;
		}
	}
	~HashMap() {
		for (int i = 0; i < bucketSize; i++)
		{
			delete buckets[i];
		}
		delete []buckets;
	}
	int size() {
		return count;
	}

	V getValue(string key) {
		int index = getBucketIndex(key);
		HashMapNode<V>* headNode = buckets[index];
		while (headNode != NULL)
		{
			if (headNode->key == key)
			{
				return headNode->value;
			}
			headNode = headNode->next;
		}
		return NULL;
	}

	void insert(string key, V value) {
		int index = getBucketIndex(key);
		HashMapNode<V>* currentNode = new HashMapNode<V>(key,value);
		HashMapNode<V>* headNode = buckets[index];
		while (headNode != NULL)
		{
			if (headNode->key == key)
			{
				headNode->value = value;
				return;
			}
			headNode = headNode->next;
		}
		currentNode->next = buckets[index];
		buckets[index] = currentNode;
		count++;
		double loadFactor = (1.0 * count) / bucketSize;
		if (loadFactor > 0.7)
		{
			rehash();
		}
	}

	void rehash() {
		HashMapNode<V>** tempNodes = buckets;
		buckets = new HashMapNode<V>*[2 * bucketSize];
		for (int i = 0; i < bucketSize; i++)
		{
			buckets[i] = NULL;
		}
		int oldBucketSize = bucketSize;
		bucketSize *= 2;
		count = 0;
		for (int i = 0; i < oldBucketSize; i++)
		{
			HashMapNode<V>* head = tempNodes[i];
			while (head != NULL)
			{
				string key = head->key;
				V value = head->value;
				insert(key, value);
				head = head->next;
			}
		}
		for (int i = 0; i < oldBucketSize; i++)
		{
			delete tempNodes[i];
		}
		delete[]tempNodes;
	}

	double getLoadFactor() {
		return  (1.0 * count) / bucketSize;
	}
	void remove(string key) {
		int index = getBucketIndex(key);
		if (buckets[index] == NULL)return;
		HashMapNode<V>* headNode = buckets[index];
		while (headNode != NULL)
		{
			if (headNode->key == key)
			{
				HashMapNode<V>* nextNode = headNode->next;
				delete headNode->next;
				headNode = nextNode;
				count--;
				return;
			}
			headNode = headNode->next;
		}
	}
};