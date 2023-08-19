#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using ll = long long;
using namespace std;
int main()
{
	ll n = 0,ans=0,m=1;
	cin >> n;
	vector<ll>a(n+1),b(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i]>>b[i];
		if (b[i] > b[m])
		{
			m = i;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (i != m)
		{
			if (a[i] == a[m])
			{
				ans = max(ans, b[m] + b[i] / 2);
			}
			else
			{
				ans = max(ans, b[i] + b[m]);
			}
		}
	}
	cout << ans;
}