#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	if (b - a == 1)
	{
		if ((a == 3 && b == 4) || (a == 6 && b == 7))
		{
			cout << "No";
		}
		else
		{
			cout << "Yes";
		}
	}
	else
	{
		cout << "No";
	}
}