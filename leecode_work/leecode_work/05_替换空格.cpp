#include<vector>
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string replaceSpace(string s) {

		int i = 0;
		while (i != -1)
		{
			i = s.find(' ');
			if (i == -1)
			{
				break;
			}
			s.replace(i,1,"%20");
		}



		return s;

	}
};
void print(string &y)
{
    for (char c : y)
	{
		cout << c ;

	}
	cout << endl;
}
void test05()
{
	Solution s;
	string uu = "we are the champion";
	string tt = s.replaceSpace(uu);
	cout << tt << endl;
	print(tt);
	cout << uu.capacity() << endl;
	uu.resize(30, '%');
	print(uu);
	for (int i = 0, j = 1; i + j < 20; i++, j++)
	{
		cout << i << '-' << j << endl;
	}
	

}
int main5()
{
	test05();
	system("pause");
	return 0;
}