
#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    int n, k;
    cin >> n >> k;
    if(n == 1) { // 这个地方是特殊的注意处理
        for(int i = 1; i <= k; i++) {
            cout << "1 ";
        }
        cout << endl;
        return 0;
    }
    if(n % 2) {
        for(int i = 1; i <= k; i++) {
            cout << (n + 1) / 2 << ' ';
        }
        cout << endl;
    }
    cout << n / 2 << ' ';
    for(int i = n; i; i--) {
        for(int j = 1; j <= k - (i == n / 2); j++) {
            if(2 * i - 1 != n) {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
}