#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<int> d(m + 1,1);
    for(int i = 1;i<=n;i++){
        int l,r; cin>>l>>r;
        d[r] = max(d[r],l+1);
    }
    for(int i = 1;i<=m;i++){
        d[i] = max(d[i],d[i-1]);
    }
    int ans = 0;
    for(int i = 1;i<=m;i++){
        ans += i - d[i] + 1;
    }
    cout<<ans<<endl;
}

signed main(){
    // int T; cin>>T; while(T--)
    solve();
    return 0;
}

