#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int n = 0, k[105] = { 0 }, X= 0;
	bool a[105][40];
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		cin >> k[i];
		for (int j = 1,x;j <= k[i]; j++)
		{
			cin >> x;
			a[i][x] = 1;
		}
	}
	cin >> X;
	int cnt = 0, mi = 1e9;
	for (int i = 1; i <= n; i++)
	{
		if (a[i][X])
		{
			mi = min(mi, k[i]);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i][X])
		{
			if (k[i] == mi)
			{
				++cnt;
			}
		}
	}
	cout << cnt << endl;
	for (int i = 1; i <= n; i++)
	{
		if (a[i][X])
		{
			if (k[i] == mi)
			{
				cout << i << " ";
			}
		}
	}
}