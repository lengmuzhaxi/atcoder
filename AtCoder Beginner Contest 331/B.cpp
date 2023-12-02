#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n = 0, s = 0, m = 0, l = 0,ans=1e9;
	cin >> n >> s >> m >> l;
    for (int a = 0; a <= 100; a++) 
    {
        for (int b = 0; b <= 100; b++) 
        {
            for (int c = 0; c <= 100; c++) 
            {
                if (a * 6 + b * 8 + c * 12 >= n) 
                {
                    ans = min(ans, a * s + b * m + c * l);
                }
            }
        }
    }
	cout << ans;
}