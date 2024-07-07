#include <bits/stdc++.h>

using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, n, k, x;
    cin >> n >> k >> x;
    for(int i = 0; ++ i <= n;) {
        cin >> a;
        cout << a << ' ';
        if(k == i) {
            cout << x << ' ';
        }
    }
}
