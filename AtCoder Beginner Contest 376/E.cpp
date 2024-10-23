#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<pair<int, int>> a(n);
        for(auto &i : a){
            cin >> i.first;
        }
        for (auto &i : a){
            cin >> i.second;
        }
        sort(a.begin(), a.end());
        multiset<int> s;

        ll sum = 0, ans = LLONG_MAX;
        for (int i = 0; i < n; i++){
            sum += a[i].second;
            s.insert(a[i].second);
            if (s.size() == k + 1){
                sum -= *s.rbegin();
                s.erase(--s.end());
            }
            if (k <= i + 1){
                ans = min(sum * a[i].first, ans);
            }

        }
        cout << ans << endl;

    }
}