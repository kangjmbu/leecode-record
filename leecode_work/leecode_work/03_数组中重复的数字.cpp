#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		unordered_map<int, bool> map;
		for (int num : nums) {
			if (map[num]) return num;
			map[num] = true;
		}
		return -1;

	}
};
void test03()
{
	Solution s;
	vector<int> uu;
	int u[7] = { 2, 3, 1, 0, 2, 5, 3 };
	for (int i = 0; i < 7; i++)
	{
		uu.push_back(u[i]);

	}
	int j = s.findRepeatNumber(uu);
	cout << j << endl;
	
}


int main33()
{
	test03();
	system("pause");
	return 0;
}