#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<cmath>
using ll = long long;
using namespace std;
int main()
{
	ll n = 0, l = 0, r = 0,k=0;
	cin >> n >> l >> r;
	vector<ll>a(n),b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i]> r)
		{
			a[i]=r;
			continue;
		}
		 else if (a[i] < l)
		{
			//cout << l << ' ';
			a[i] = l;
			continue;
		}
		 else
		{
			//cout << a[i] << ' ';
			a[i] = a[i];
		}
		b.push_back(a[i]);
	}
	for (auto it=b.begin();it!=b.end();it++)
	{
		cout << *it << ' ';
	}
}