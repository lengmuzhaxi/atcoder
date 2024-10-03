/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    ll k;
    cin >> n >> m >> k;
    vector<pair<ll, int>> a(n);
    for(int i = 0; i < n; i ++ ) {
        cin >> a[i].first;
        a[i].second = i;
        k -= a[i].first;
    }
    if(n == m) {
        for(int i = 0; i < n; i ++ ) {
            cout << 0 << " \n"[i == n - 1];
        }
        return;
    }
    sort(a.rbegin(), a.rend());

    vector<ll> sum(n + 1);
    for(int i = 0; i < n; i ++ ) {
        sum[i + 1] = sum[i] + a[i].first;
    }
    vector<ll> ans(n);

    auto check = [&](ll now, ll pre) -> bool {
        if(now < a[m - 1].first)	return false;
        int l = 0, r = m - 1;
        while(l <= r) {
            int mid = l + r >> 1;
            if(a[mid].first <= now)	r = mid - 1;
            else	l = mid + 1;
        }
        ll x = pre >= a[m - 1].first ? sum[m + 1] - sum[l] - pre : sum[m] - sum[l], y = (now + 1) * (m - l);
        return y - x > k - now + pre;
    };
    for(auto [x, y] : a) {
        ll l = 0, r = k;
        while(l <= r) {
            ll mid = l + r >> 1;
            if(check(mid + x, x)) 	r = mid - 1;
            else	l = mid + 1;
        }
        ans[y] = l > k ? -1 : l;
    }

    for(auto res : ans)	cout << res << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);	cin.tie(0);		cout.tie(0);
    int T = 1;
    while(T --) {
        solve();
    }
    return 0;
}*/