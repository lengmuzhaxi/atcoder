#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int f = 1;
	for (int i = 2; i <=16; i+=2)
	{
		if (s[i-1] != '0')
		{
			f = 0;
		}
	}
	if (f)
	{
		cout << "YES";
	}
}