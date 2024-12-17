#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<ll, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    ll s; cin >> s;
    ll sum = 0;
    vector<ll> a(2 * n + 1), pre(2 * n + 1);
    mp[0] = 1;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        sum += a[i];
        pre[i] = pre[i - 1] + a[i];
        mp[pre[i]] = 1;
    }
    for (int i = n + 1;i <= 2 * n;i++) {
        a[i] = a[i - n];
        pre[i] = pre[i - 1] + a[i];
        mp[pre[i]] = 1;
    }
    s %= sum;
    for (int i = 0;i <= 2 * n;i++) {
        if (mp.find(pre[i] - s) != mp.end()) {
            cout << "Yes" << '\n';
            return 0;
        }
    }
    cout << "No" << '\n';
}