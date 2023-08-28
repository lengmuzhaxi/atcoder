#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int n, m, a[15][15], u, v, c, ans, vis[15];
inline void dfs(int k, int sum) 
{
	vis[k] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (a[k][i] && !vis[i])
		{
			dfs(i, sum + a[k][i]);
		}
	}
		vis[k] = 0;
		ans = max(ans, sum);
}
int main() 
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++) 
	{
		cin >> u >> v >> c;
		a[u][v] = a[v][u] = c;
	}
	for (int i = 1; i <= n; i++)
	{
		dfs(i, 0);
	}
	cout << ans;
	return 0;
}