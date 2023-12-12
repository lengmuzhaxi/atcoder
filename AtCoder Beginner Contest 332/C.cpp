#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int>nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    stack<int> st1, st2;
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++) {
        stack<int> temp;
        while (!st1.empty() && nums[i] > nums[st1.top()]) {
            int x = st1.top();
            st1.pop();
            temp.push(x);
        }
        while (!st2.empty() && nums[i] > nums[st2.top()]) {
            int x = st2.top();
            ans[x] = nums[i];
            st2.pop();
        }
        while (!temp.empty()) {
            st2.push(temp.top());
            temp.pop();
        }
        st1.push(i);
    }
}