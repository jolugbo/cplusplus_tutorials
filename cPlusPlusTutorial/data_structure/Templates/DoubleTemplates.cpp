template<typename T, typename  V>
class DoublePair {
	T x;
	V y;
public:
	DoublePair(T inputX, V inputY) {
		x = inputX;
		y = inputY;
	}
	T getX() {
		return x;
	}
	void setX(T inX) {
		x = inX;
	}
	V getY() {
		return y;
	}
	void setY(V inY) {
		y = inY;
	}
};