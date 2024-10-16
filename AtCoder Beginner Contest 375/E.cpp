#include<bits/stdc++.h>
using namespace std;
int a,as[101],bs[101],dp[501][501],c;

int main()
{
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>as[i]>>bs[i];
        c+=bs[i];
    }
    if(c%3)
    {
        cout<<-1;
        return 0;
    }
    c/=3;
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            dp[i][j]=1e9;
        }
    }
    dp[0][0]=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=c;j>=0;j--)
        {
            for(int k=c;k>=0;k--)
            {
                dp[j][k]+=(as[i]!=3);
                if(bs[i]<=j)dp[j][k]=min(dp[j][k],dp[j-bs[i]][k]+(as[i]!=1));
                if(bs[i]<=k)dp[j][k]=min(dp[j][k],dp[j][k-bs[i]]+(as[i]!=2));
            }
        }
    }
    if(dp[c][c]<1e8)cout<<dp[c][c];
    else cout<<-1;
}