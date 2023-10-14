#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using ll = long long;
using namespace std;
int main()
{
	ll n = 0,m=0;
	cin >> n;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    while (n % 3 == 0)
    {
        n /= 3;
    }
    if (n == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}