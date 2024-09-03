#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;
int a[maxn],n;
long long dp[maxn][3];
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
        cin >> a[i];
    int cnt = 1;
    dp[1][1] = a[1];
    for (int i = 2;i <= n;i++)
    {
        dp[i][0] = max(dp[i - 1][1] + 2 * a[i],dp[i - 1][0]);
        dp[i][1] = max(dp[i - 1][0] + a[i],dp[i - 1][1]);
    }
    cout << max(dp[n][0],dp[n][1]);
    return 0;
}