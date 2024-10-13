#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main(void) {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int d = (min({i + 1, j + 1, n - i, n - j})) % 4, x = i, y = j;
            for (int k = 0; k < d; k++)
                swap(x, y), x = n - 1 - x;
            cout << a[x][y];
        }
        cout << '\n';
    }
    return 0;
}