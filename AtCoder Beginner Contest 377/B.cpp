#include <bits/stdc++.h>
using namespace std;
string s[20];
bool b[20], c[20];
int main() {
    for (int i = 0; i < 8; i++)
        cin >> s[i];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (s[i][j] == '#')
                b[i] = c[j] = true;
        }
    }
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (!b[i] && !c[j])
                ans++;
        }
    }
    cout<<ans;
}