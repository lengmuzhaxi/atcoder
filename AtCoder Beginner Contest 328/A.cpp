#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int n = 0, x = 0, sum = 0, a[1000] = { 0 };
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] <= 200)
		{
			sum += a[i];
		}
	}
}