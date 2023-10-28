#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	cin >> x;
	for (int i = x; i; i++)
	{
		int a = i / 100, b = i / 10 % 10, c = i % 10;
		if (a * b == c)
		{
			cout << i;
			break;
		}
	}
	
}
