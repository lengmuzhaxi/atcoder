#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> c[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (!mp[c[i]] || mp[c[i]] > a[i])
            mp[c[i]] = a[i];
    }

    int ans = 0;
    for(auto  [x,y]:mp)
    {
        ans = max(y, ans);
    }
    cout << ans << '\n';
    return 0;
}