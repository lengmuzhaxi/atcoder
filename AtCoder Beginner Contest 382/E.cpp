#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int n,x;
const int maxn=5010;
int p[maxn];
double dp[maxn][maxn],g[maxn];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>x;
    for(int i=1;i<=n;i++) cin>>p[i];
    dp[0][0]=1.0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0) dp[i][j]=(1-1.0*p[i]/100)*dp[i-1][j];
            else dp[i][j]=(1-1.0*p[i]/100)*dp[i-1][j]+1.0*p[i]/100*dp[i-1][j-1];
        }
    }
    for(int i=1;i<=x;i++)
    {
        double term=0;
        for(int j=1;j<=min(i,n);j++) term+=g[i-j]*dp[n][j];
        term+=1;
        g[i]=term/(1.0-dp[n][0]);
    }
    cout<<fixed<<setprecision(16)<<g[x]<<endl;


    return 0;
} //
// Created by dzl on 24-12-5.
//
