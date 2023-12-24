#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
long double a, m, l, r;
int main() 
{
	cin >> a >> m >> l >> r;
	long long k = floor((r - a) / m);
	cout << (long long)floor((r - a) / m) - (long long)ceil((l - a) / m) + 1 << '\n';
	return 0;
}