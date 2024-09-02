#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[1000000+5];
long long f[1000000+5],d[1000000+5];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        f[i]=a[i]-a[i-1];
    }
    long long ans=1;
    d[1]=1;
    for(long long i=2;i<=n;i++)
    {
        if(f[i]!=f[i-1])
        {
            d[i]=2;
            ans+=2;
            continue;
        }
        d[i]=d[i-1]+1;
        ans+=d[i];
    }
    cout<<ans<<"\n";
    return 0;
}