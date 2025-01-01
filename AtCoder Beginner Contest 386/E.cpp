/*#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int& a : A) cin >> a;
    vector<int> rs {0};
    for (int i = N - 1; i >= 0; i--) {
        rs.emplace_back(rs.back() ^ A[i]);
    }
    reverse(rs.begin(), rs.end());
    int ans = 0;
    auto dfs = [&](auto dfs, int i, int s, int r) {
        if (r == 0) {
            ans = max(ans, s);
            return;
        }
        if (N - i == r) {
            ans = max(ans, s ^ rs[i]);
            return;
        }
        dfs(dfs, i + 1, s ^ A[i], r - 1);
        dfs(dfs, i + 1, s, r);
    };
    dfs(dfs, 0, 0, K);
    cout << ans << endl;
    return 0;
}*/