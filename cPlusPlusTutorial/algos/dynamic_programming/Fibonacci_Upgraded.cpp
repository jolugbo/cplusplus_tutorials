class Fibonacci_Upgraded {
public:
	int calc_fibo(int n) {
		if (n == 0 || n == 1)return n;
		return calc_fibo(n - 1) + calc_fibo(n - 2);
	}
	int calc_fibo1(int n, int* arr) {
		if (n == 0 || n == 1)return n;
		if (arr[n] != 0)return arr[n];
		int result = calc_fibo1(n - 1, arr) + calc_fibo1(n - 2, arr);
		arr[n] = result;
		return result;
	}
	int calc_fibo2(int n) {
		int* arr = new int[n];
		arr[0] = 0;
		arr[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		int result =  arr[n];
		return result;
	}
};