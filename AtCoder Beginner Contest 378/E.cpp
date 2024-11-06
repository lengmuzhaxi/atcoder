#include<bits/stdc++.h>
using namespace std;
const int N=200005;
typedef long long ll;
ll a[N],c[N],n,m;
void add(int x)
{
    for(;x<=m;x+=x&(-x))c[x]++;
}
int get(int x)
{
    int sum=0;
    for(;x;x-=x&(-x))sum+=c[x];
    return sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    ll sum=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=(a[i]+a[i-1])%m;
        ans+=a[i]*i-sum+(i-get(a[i]+1)-1)*m;
        sum+=a[i];
        add(a[i]+1);
    }
    cout<<ans<<'\n';
    return 0;
}
