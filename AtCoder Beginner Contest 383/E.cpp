#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define PII pair<ll,ll>
// #define inf LLONG_MAX - 1e18
#define inf 0x3f3f3f3f3f3f3f3f
#define lowbit(x) (x&(-x))
#define all(x) x.begin(), x.end()
const double PI = acos(-1);
const double eps = 1e-7;
const ll N = 2e6 + 10;
const ll M = 5050;
ll fa[N];
ll find(ll x) {
    if(x == fa[x]) return x;
    return fa[x] = find(fa[x]);
}
void merge(ll x, ll y) {
    x = find(x); y = find(y);
    if(x == y) return ;
    fa[y] = x;
}
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    for (ll i = 1; i <= n; i++) fa[i] = i;
    vector<array<ll, 3>> g;
    for (ll i = 1; i <= m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        g.push_back({w, u, v});
    }
    sort(all(g));
    vector<ll> a(n + 1), b(n + 1);
    for (ll i = 1; i <= k; i++) {
        ll x;
        cin >> x;
        a[x]++;
    }
    for (ll i = 1; i <= k; i++) {
        ll x;
        cin >> x;
        b[x]++;
    }
    ll ans = 0;
    for (auto [w, u, v] : g) {
        u = find(u), v = find(v);
        // cout << u << " " << v << " " << a[u] << " " << a[v] << " " << b[u] << " " << b[v] << '\n';
        if(u == v) continue;
        ll x = min(a[u], b[v]);
        ll y = min(a[v], b[u]);
        ans += (x + y) * w;
        a[u] += a[v] - x - y;
        b[u] += b[v] - x - y;
        fa[v] = u;
    }
    cout << ans << '\n';
}
signed main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    // init();
    // Prime();
    // cout << fixed << setprecision(10);
    ll _ = 1;
    // cin >> _;
    while (_--) solve();
    return 0;
}