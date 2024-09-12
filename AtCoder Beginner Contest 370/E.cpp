//
// Created by dzl on 24-9-12.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=998244353;
int n;
ll k,sum[200005],dp[200005];
map<ll,ll> mp;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        sum[i]=sum[i-1]+a;
    }
    mp[0]=1;
    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        dp[i]=(ans-mp[sum[i]-k]+mod)%mod;
        mp[sum[i]]=(mp[sum[i]]+dp[i])%mod;
        ans=(ans+dp[i])%mod;
    }
    cout<<dp[n];
    return 0;
}