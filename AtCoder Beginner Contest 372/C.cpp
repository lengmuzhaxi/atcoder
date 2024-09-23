#include<bits/stdc++.h>

using namespace std;
int n, q;
string s;
signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> q >> s;
    s = ' ' + s;
    int ans = 0;
    for (int i = 1; i <= n - 2; i++){
        ans += (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C');
    }
    while (q--){
        int x;
        char t;
        cin >> x >> t;
        if (x >= 3){
            if (s[x] == 'C' && s[x - 1] == 'B' && s[x - 2] == 'A'){
                ans--;
            }
        }
        if (x + 1 <= n && x >= 2){
            if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C'){
                ans--;
            }
        }
        if (x + 2 <= n){
            if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C'){
                ans--;
            }
        }
        s[x] = t;
        if (x >= 3){
            if (s[x] == 'C' && s[x - 1] == 'B' && s[x - 2] == 'A'){
                ans++;
            }
        }
        if (x + 1 <= n && x >= 2){
            if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C'){
                ans++;
            }
        }
        if (x + 2 <= n){
            if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C'){
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}