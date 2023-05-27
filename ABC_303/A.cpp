#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	char a[100] = { 0 }, b[100] = { 0 };
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];	  
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b[i])
		{
			s++;
		}
		else if ((a[i] == '0' && b[i] == 'o') || (b[i] == '0' && a[i] == 'o'))
		{
			s++;
		}
		else if ((a[i] == '1' && b[i] == 'l') || (b[i] == '1' && a[i] == 'l'))
		{
			s++;
		}
	}
	if (s== n)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
