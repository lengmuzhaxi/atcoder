#include<bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> ver;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        ver.push_back(x);
        while (ver.size() >= 2 && ver.back() == ver[ver.size() - 2])
        {
            ver.pop_back();
            ver.back() ++;
        }
    }
    cout << ver.size() << '\n';
    return 0;
}