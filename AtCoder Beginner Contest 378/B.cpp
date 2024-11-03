#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,l,r) for(int i=(l);i<(r);++i)

int main(){
    int n; cin>>n;
    vector<int> q(n+1), r(n+1);
    rep(i,1,n+1) cin>>q[i]>>r[i];
    int m; cin>>m;
    rep(i,0,m){
        int t,d; cin>>t>>d;
        if(d%q[t]==r[t]) cout<<d<<endl;
        else{
            int k=d/q[t];
            if(d<q[t]*k+r[t]) cout<<q[t]*k+r[t]<<endl;
            else {k++; cout<<q[t]*k+r[t]<<endl;}
        }
    }
}