using namespace std;
template<typename T>
class Generic_Tree {
public:
	T data;
	vector<Generic_Tree<T>*> children;
	Generic_Tree(T value) {
		data = value;
	}
};