#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    int k = 0, nums[5] = { 5,10,1,5,2 };
    cin >> k;
    long long  sum = 0;
    for (int i = 0; i < 5; i++)
    {
        long long b = 0;
        for (int j = 0; j < 32; j++)
        {
            if (((i >> j) & 1) == 1)
            {
                b++;
            }
        }
        if (b == k)
        {
            sum += nums[i];
        }
    }
    cout<< sum;
}