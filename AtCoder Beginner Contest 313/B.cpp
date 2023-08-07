#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int i=0, n=0, m=0, u=0, v=0, t = 0, k = 1;
	int p[10] = { 0 };
	cin >> n >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> u >> v;
		p[v]++;
	}
	for (i = 1; i <= n; i++)
	{
		if (p[i] == 0)
		{
			t++;
			k = i;
		}
	}
	if (t == 1)
	{
		cout << k;
	}
	else
	{
		cout << -1;
	}
}