/*#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
int h, w, d, ans, dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1}; string s[N]; queue<array<int, 3>> q; bool vis[N][N];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> h >> w >> d;
    for (int i = 0; i < h; i++) {
        cin >> s[i];
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 'H') q.push({i, j, 0});
        }
    }
    while (!q.empty()) {
        auto [r, c, l] = q.front(); q.pop();
        ans++;
        if (l >= d) continue;
        for (int k = 0; k < 4; k++) {
            int nr = r + dx[k], nc = c + dy[k];
            if (0 <= nr && nr < h && 0 <= nc && nc < w && s[nr][nc] == '.' && !vis[nr][nc]) {
                vis[nr][nc] = 1; q.push({nr, nc, l + 1});
            }
        }
    }
    cout << ans << "\n";
}*/