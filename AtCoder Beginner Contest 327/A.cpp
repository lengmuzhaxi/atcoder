#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	string c = "ab", b = "ba", a;
	cin >> a;
	if (a.find(c) != string::npos || a.find(b) != string::npos)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}