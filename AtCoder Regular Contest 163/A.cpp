#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0,f=0;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < n - 1; i++)
		{
			if (s.substr(0, i + 1) < s.substr(i + 1))
			{
				f = 1;
			}
		}
		cout << (f == 1 ? "YES\n" : "NO\n");
	}
}