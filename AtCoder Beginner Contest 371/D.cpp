#include<bits/stdc++.h>
using namespace std;
long long n,t,l,r;
long long w[200005],sum[200005];
int main(){
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>w[i];
    }
    for(long long i=1,x;i<=n;i++){
        cin>>x;
        sum[i]=sum[i-1]+x;
    }
    cin>>t;
    while(t--){
        cin>>l>>r;
        long long idl=lower_bound(w+1,w+n+1,l)-w-1,idr=upper_bound(w+1,w+n+1,r)-w-1;
        cout<<sum[idr]-sum[idl]<<"\n";
    }
    return 0;
}