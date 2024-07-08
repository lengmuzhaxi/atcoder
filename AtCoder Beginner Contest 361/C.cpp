#include<bits/stdc++.h>
using namespace std;
int n,a[200005],k;
signed main(){
    cin>>n>>k;int ans=INT_MAX;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=0;i<=k;i++){
        ans=min(ans,a[n-(k-i)]-a[i+1]);
    }
    cout<<ans;
}