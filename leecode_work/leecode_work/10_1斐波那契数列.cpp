#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
	const int mod = 1e9 + 7;
	int fib1(int n) {
		
		if (n < 2) {
			return n;
		}
		int q=0, w=0, r=1;
		while (n >= 2)
		{
			q = w;
			w = r;
			r = q + w;
			n--;
		}
		return r%mod;

	}
	pair<int, int> fib2_s(int y)
	{
		
		if (y <= 1) {
			return pair<int, int>(1,0);
		}
		pair<int, int> a = fib2_s(y - 1);
		return pair<int, int>((a.first + a.second) % mod, a.first%mod);
	}
	int fib2(int n) {
		if (n == 0)
		{
			return 0;
		}
		pair<int, int> ff = fib2_s(n);
		return ff.first;
	}

	//快速幂法   待看
	int fib3(int n) {
		if (n < 2) {
			return n;
		}
		vector<vector<long>> q{ {1, 1}, {1, 0} };
		vector<vector<long>> res = pow(q, n - 1);
		return res[0][0];
	}

	vector<vector<long>> pow(vector<vector<long>>& a, int n) {
		vector<vector<long>> ret{ {1, 0}, {0, 1} };
		while (n > 0) {
			if (n & 1) {
				ret = multiply(ret, a);
			}
			n >>= 1;
			a = multiply(a, a);
		}
		return ret;
	}

	vector<vector<long>> multiply(vector<vector<long>>& a, vector<vector<long>>& b) {
		vector<vector<long>> c{ {0, 0}, {0, 0} };
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				c[i][j] = (a[i][0] * b[0][j] + a[i][1] * b[1][j]) % mod;
			}
		}
		return c;
	}

	
};

void test10() {
    int n=30;
	Solution ss;
	//int bb= ss.fib1(n);
	//int bb = ss.fib2(n);
	int bb = ss.fib3(n);
	cout << bb << endl;
}

int main10() {
	
	test10();
	system("pause");
	return 0;
}