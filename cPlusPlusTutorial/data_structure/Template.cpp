template<typename T>
class Pair {
	T x;
	T y;
public:
	T getX() {
		return x;
	}
	T getY() {
		return y;
	}
	void setX(T inX) {
		x = inX;
	}
	void setY(T inY) {
		y = inY;
	}

};