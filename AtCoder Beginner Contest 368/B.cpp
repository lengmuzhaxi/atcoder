#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[105];
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int i=1;
    sort(a+1,a+n+1,cmp);
    for(i=1;a[2]>0;i++)
    {
        a[1]--;
        a[2]--;
        sort(a+1,a+n+1,cmp);
    }
    cout<<i-1;
    return 0;
}