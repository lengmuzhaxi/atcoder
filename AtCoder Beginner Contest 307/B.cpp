#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	int n = 0;
	string s[105];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			string t = s[i] + s[j];
			string a = t;
			reverse(a.begin(), a.end());
			if (t == a)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}
