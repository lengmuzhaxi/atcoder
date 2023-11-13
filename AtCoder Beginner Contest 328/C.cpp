#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n = 0, x = 0;
	cin >> n >> x;
	string s;
	cin >> s;
	vector<int>a(n+1), b(n+1);
	while (x--)
	{
		int l = 0, r = 0;
		cin >> l >> r;
		for (int i = 1; i <n ; i++)
		{
			if (s[i] == s[i-1])
			{
				a[i] = 1;
			}
		}
		for (int i = 1; i < n; i++)
		{
			b[i] = b[i-1] + a[i];
		}
		cout << b[r-1] - b[l-1] << '\n';
	}
}