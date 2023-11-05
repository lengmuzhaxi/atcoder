#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
using ll = long long;
int main()
{
    ll B=0,f=0,k=0;
    cin >> B;
    for (int i = 1; i <= 16; i++) 
    {
        ll AA = 1;
        for (int j = 1; j <= i; j++)
        {
            AA *= i;
            if (AA == B)
            {
                f = 1;
                k = i;
                break;
            }
        }
    }
    if(f)
    { 
        cout << k;
    }
    else
    {
        cout << -1;
    }
}