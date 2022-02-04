#include<iostream>
#include<vector>
#include<string>

using namespace std;




class Solution {
public:
	const int mod = 1e9 + 7;
	int numWays(int n) {
		if (n < 2) {
			return 1;
		}
		
		int q = 1, w = 1, r = 1;
		while (n >= 2)
		{

			q = w;
			w = r;
			r = (q + w) % mod;
			n--;
		}
		return r;
	}
};

void test101() {
	int n = 30;
	Solution ss;
	//int bb= ss.fib1(n);
	//int bb = ss.fib2(n);
	int bb = ss.numWays(n);
	cout << bb << endl;
}

int main101() {

	test101();
	system("pause");
	return 0;
}