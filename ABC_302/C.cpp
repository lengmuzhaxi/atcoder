#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() 
{
	int n=0,m=0,at=0;
	char a[110][110] = { 0 };
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j < i; j++)
		{
			for (int k = 1; k <= m; k++) 
			{
				if (a[i][k] != a[j][k])
					at++;
			}
		}
	}
	if (at >= n - 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}