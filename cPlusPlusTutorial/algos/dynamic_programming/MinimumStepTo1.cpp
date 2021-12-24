#include <math.h>
#include <queue>
using namespace std;
class MinimumStepTo1 {
public:
	int calcMinimumStepTo1(int n,int count) {
		priority_queue<int,vector<int>,greater<int>> pq;
		if (n == 1) return count;
		int ans1 = 0, ans2 = 0, ans3 = 0;
		if (n % 3 == 0)ans1 =  calcMinimumStepTo1(n / 3, 1+count);
		if (n % 2 == 0) ans2 = calcMinimumStepTo1(n / 2, 1 + count);
		ans3 = calcMinimumStepTo1(--n, 1 + count);
		pq.push(ans1);
		pq.push(ans2);
		pq.push(ans3);
		if (pq.top() == 0)pq.pop();
		if (pq.top() == 0)pq.pop();
		return pq.top();
	}
};