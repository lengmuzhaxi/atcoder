#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
using ll = long long;
using namespace std;
int main()
{
	ll n = 0, d = 0, p = 0,sum=0,ans=0,a[200000]={}
	cin >> n >> d >> p;
	for (int i = 1; i <=n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	for (int i = 2; i <=n; i++) 
	{
		sum += a[i];
		if (i % d == 0) 
		{
			ans += min(sum, p);
			sum = 0;
		}
	}
	ans += min(sum, p);
	cout << ans;
}