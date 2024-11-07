#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<array<int,2>> a;
    for(int v,p;n--;){
        cin>>v>>p;
        if(v>p) a.push_back({v,p});
    }
    sort(a.rbegin(),a.rend());
    n=a.size();
    vector<ll> v(n+1);
    for(int i=n-1;~i;i--) v[i]=v[i+1]+a[i][0]-a[i][1];
    ll ans=0,s=0;
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        int sz=q.size();
        if(++sz==m) ans=max(ans,v[i]+m-1-s);
        q.push(a[i][1]);s+=a[i][1];
        if(sz==m) s-=q.top(),q.pop();
    }
    cout<<ans<<"\n";
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}