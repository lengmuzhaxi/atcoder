#include <bits/stdc++.h>
using namespace std;
int n,k,a[200005],s[200005],t[1000005];
long long sum;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
        s[i]%=k;
    }
    for(int j=n+1;j<2*n;j++)
    {
        s[j]=(a[j-n]+s[j-1])%k;
    }
    for(int i=1;i<n;i++)
    {
        t[s[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        t[s[i]]--;
        t[s[i+n-1]]++;
        sum=sum+t[s[i]];
    }
    cout<<sum;
    return 0;
}