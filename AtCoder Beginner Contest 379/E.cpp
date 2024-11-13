#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e6 + 10;
long long a[N];
int n;
string s;
int main()
{

    cin >> n >> s;
    s = " " + s;
    for (int i = 1; i <= n; i++)
    {
        a[n - i + 1] += (s[i] - '0') * i;
    }
    for (int i = n; i >= 1; i--)
    {
        a[i] += a[i + 1];
    }

    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1] / 10;
        a[i - 1] %= 10;
    }
    long long len = n;
    while (a[len] == 0)
        len--;
    for (int i = len; i >= 1; i--)
        cout << a[i];
}