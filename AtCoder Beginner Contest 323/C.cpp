#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{
	int n=0,m=0,mx=0,cnt=0, a[105], p[105], y[105][105];
	cin >> n >> m;
	string s;
	for (int i = 1; i <= m; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) 
	{
		cin >> s;
		for (int j = 0; j < m; j++) 
		{
			if (s[j] == 'o')
			{
				p[i] += a[j + 1];
			}
			else y[i][++y[i][0]] = a[j + 1];
		}
		mx = max(mx, p[i] += i);
		sort(y[i] + 1, y[i] + y[i][0] + 1);
	}
	for (int i = 1; i <= n; i++) 
	{
		cnt = 0;
		while (p[i] < mx)
		{
			p[i] += y[i][y[i][0]--];
			cnt++;
		}
		cout << cnt << endl;
	}
}