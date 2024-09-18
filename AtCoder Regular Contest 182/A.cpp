#include <bits/stdc++.h>
using namespace std;
const int mod=998244353;
int main(){
    int n,qr;
    cin>>n>>qr;
    vector<int>p,v;
    vector<int>a(qr),b(qr);
    for(int i=0;i<qr;i++){
        int x,y;
        cin>>x>>y;
        p.push_back(x);
        v.push_back(y);
    }
    for(int i=0;i<qr;i++){
        for(int j=i+1;j<qr;j++){
            if(v[i]<=v[j])continue;
            if(p[i]<=p[j]){
                a[j]=1;
                b[i]=1;
            }
            if(p[i]>=p[j]){
                a[i]=1;
                b[j]=1;
            }
        }
    }
    int ans=1;
    for(int i=0;i<qr;i++)ans=ans*(2-a[i]-b[i])%mod;
    cout<<ans<<endl;
    return 0;
}