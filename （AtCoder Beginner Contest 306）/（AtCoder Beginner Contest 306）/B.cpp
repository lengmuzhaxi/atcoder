#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef unsigned long long ll;
int main()
{
	ll ans, sum = 0, cnt = 1;
	for (int i = 0; i < 64; i++)
	{
		cin >> ans;
		if (ans == 1)
		{
			sum += cnt;
		}
		cnt *= 2;
	}
	cout << sum;
	return 0;
}
