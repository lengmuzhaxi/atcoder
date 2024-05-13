#include<bits/stdc++.h>
using namespace std;
long long a[300000];
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    long long n,i,ans=0,p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        ans+=a[i]*(n-1);
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        p=lower_bound(a,a+n,100000000-a[i])-a;
        p=max(p,i+1);
        if(p>i)ans-=(n-p)*100000000;
    }
    cout<<ans<<'\n';
    return 0;
}