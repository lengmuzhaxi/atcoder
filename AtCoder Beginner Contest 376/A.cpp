//
// Created by dzl on 24-10-19.
//
#include <bits/stdc++.h>
#define _for(i, a, b)  for (int i = (a); i <= (b); i ++ )
using namespace std;
const int N = 105, inf = 2e9 + 5;
int n, C, lst = - inf, t, ans;
int main() {
    ios :: sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> C;
    _for (i, 1, n) {
        cin >> t;
        if (t >= lst + C)  ans ++ , lst = t;
    }
    cout << ans << "\n";
    return 0;
}
