#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
int main()
{
	int n=0;
	cin >> n;
	vector<int>a(n),c(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	set<int>b(a.begin(), a.end());
	for (auto i : b)
	{
		c.push_back(i);
	}
	cout << c[c.size() - 2];
}