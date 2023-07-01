#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<pair<long double, int>> p(n);
	for (int i = 0; i < n; i++)
	{
		long double a, b, s;
		cin >> a >> b;
		s = a / (a + b);
		p[i] = { s,-i - 1 };
	}
	sort(p.rbegin(), p.rend());
	for (auto [s, idx] : p)
	{
		cout << -idx << ' ';
	}
	cout << endl;
	return 0;
}