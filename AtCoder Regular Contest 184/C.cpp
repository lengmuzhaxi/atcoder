#include <bits/stdc++.h>
using namespace std;

using lint = long long;

int N;
vector<lint> a;

int f(vector<lint> v, int k) {
    for (lint& x : v) x += k;

    if (v.empty()) return 0;
    if (v.size() == 1) return 1;

    vector<lint> e, o;

    for (lint x : v) (x % 2 ? o : e).push_back(x);

    for (lint& x : e) x /= 2;

    int V = 0, M = 0;
    for (lint x : o) (x % 4 == 1 ? V : M)++;

    int res = max(M + f(e, 0), V + f(e, 1));

    return res;
}

int main() {
    cin >> N;
    a.resize(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    cout << max(f(a, 1), f(a, 2)) << '\n';
}
