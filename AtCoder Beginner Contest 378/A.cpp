#include <bits/stdc++.h>
using namespace std;

int a[4];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    n = 4;
    while (n -- )
    {
        cin >> x;
        a[x] ++ ;
    }
    cout << a[1] / 2 + a[2] / 2 + a[3] / 2 + a[4] / 2 << '\n';
    return 0;
}