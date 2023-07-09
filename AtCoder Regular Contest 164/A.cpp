#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, k = 0;
		cin >> n >> k;
		while (n)
		{
			k -= n % 3;
			n /= 3;
		}
		if (k >= 0 && !(k & 1))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}