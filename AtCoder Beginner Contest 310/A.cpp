#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
	ll n = 0, p = 0, q = 0, a[100] = { 0 };
	cin >> n >> p >> q;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	if (p >= q + a[0])
	{
		cout << q + a[0];
	}
	else
	{
		cout << p;
	}
}