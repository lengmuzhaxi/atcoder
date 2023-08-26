#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n = 0, a[100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i + 1] - a[i] == 2)
		{
			cout << a[i] + 1;
		}
	}
}