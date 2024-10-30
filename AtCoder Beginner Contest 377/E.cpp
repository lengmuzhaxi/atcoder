#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long int;

int pow_r (int x, ll n, int mod) {
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow_r(((ll)x * (ll)x) % mod, n/2, mod);
    else
        return (ll)x * (ll)pow_r(((ll)x * (ll)x) % mod, (n-1)/2, mod) % mod;
}

int main() {
    int n;
    ll k;
    cin >> n >> k;
    vector<int> v(n);
    rep(i, n) {
        cin >> v[i]; v[i]--;
    }
    vector<int> u(n);
    vector<int> seen(n, false);
    rep(i, n) {
        int x = i;
        vector<int> s;
        while (!seen[x]) {
            seen[x] = true;
            s.push_back(x);
            x = v[x];
        }
        int m = s.size();
        rep(j, m)
          u[s[j]] = s[(j + pow_r(2, k, m)) % m];
    }
    rep(i, n)
      cout << u[i] + 1 << " ";
    cout << endl;
    return 0;
}
//
// Created by dzl on 24-10-30.
//
