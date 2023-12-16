#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
signed main() 
{
	char a, b, c, d;
	cin >> a >> b >> c >> d;
	if (abs(a - b) == abs(c - d) || abs(a - b) + abs(c - d) == 5)
		cout << "Yes";
	else
	{
		cout << "No";
	}
}