/*#include<bits/stdc++.h>
using namespace std;
int a[200005],n,t[200005],ans,f[200005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==a[i+1])f[i+1]=min(f[i-1]+2,i+1-t[a[i]]);
        t[a[i]]=i;
        ans=max(ans,f[i+1]);
    }
    cout<<ans;
    return 0;
}*/