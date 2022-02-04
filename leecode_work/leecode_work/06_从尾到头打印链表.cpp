#include<vector>
#include<iostream>
#include<string>
#include<deque>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		deque<int> v;
		while (head != NULL)
		{
			v.push_front(head->val);
			head = head->next;

		}
		vector<int> vv;

		for (int num : v)
		{
			vv.push_back(num);
		}
		return vv;
	}
};
void test06()
{
	Solution s;
	ListNode L1(1);
	
	ListNode L2(3);
	ListNode L3(2);
	L1.next = &L2;
	L2.next = &L3;
	
	vector<int> bb = s.reversePrint(&L1);
	cout << bb.size() << endl;




}
int main6()
{
	test06();
	system("pause");
	return 0;
}