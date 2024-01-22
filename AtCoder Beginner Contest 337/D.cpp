#include<iostream>
using namespace std;
int main()
{
	int n, m, k, ans = 1e9;
	string a[200005];
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] = " " + a[i];
	}
	for (int i = 1; i <= n; i++) 
	{
		int l = 1, cnt = 0;
		for (int j = 1; j <= m; j++) 
		{
			if (a[i][j] == 'x') 
			{ 
			  l = j + 1; 
			  cnt = 0; 
			  continue; 
			}
			if (a[i][j] == '.') 
				++cnt;
			while (j - l + 1 > k) 
			{
				if (a[i][l] == '.')
				{
					--cnt;
				}
				++l;
			}
			if (j - l + 1 == k)
			{
				ans = min(ans, cnt);
			}
		}
	}
	for (int j = 1; j <= m; j++) 
	{
		int l = 1, cnt = 0;
		for (int i = 1; i <= n; i++) 
		{
			if (a[i][j] == 'x') 
			{ 
				l = i + 1; 
				cnt = 0; 
				continue; 
			}
			if (a[i][j] == '.')
			{
				++cnt;
			}
			while (i - l + 1 > k) 
			{
				if (a[l][j] == '.')
				{
					--cnt;
				}
				++l;
			}
			if (i - l + 1 == k)
			{
				ans = min(ans, cnt);
			}
		}
	}
	if (ans == 1e9)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << ans << endl;
	}
}