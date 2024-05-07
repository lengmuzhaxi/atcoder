#include<bits/stdc++.h>
using namespace std;
long long n,x,y,z=0,ans=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        z=max(z,y-x);
        ans+=x;
    }
    cout<<ans+z;
    return 0;
}