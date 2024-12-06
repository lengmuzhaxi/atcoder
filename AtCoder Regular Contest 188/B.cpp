#include <bits/stdc++.h>

using namespace std;


bool solve(int N, int K) {
    if ((N & 3) == 0) return false;
    if (N & 1) {
        return gcd(N, K) == 1;
    }
    return gcd(N / 2, K) == 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        cout << (solve(N, K) ? "Yes" : "No") << '\n';
    }
}
