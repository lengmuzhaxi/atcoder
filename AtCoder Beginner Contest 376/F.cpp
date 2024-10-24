#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int inf=0x3f3f3f3f;
void solve()
{
    int N,Q;
    cin>>N>>Q;
    vector<int> dp(N,inf);
    int x=0;//上一场动的点，左/右
    dp[1]=0;
    int d=0;//上一场动的点到哪
    for(int i=0;i<Q;i++)
    {
        char c;
        int a;//这一场懂得点
        int b;//动的点到的位置
        vector<int> ndp(N,inf);
        cin>>c>>b;
        b--;
        a=(c=='L'?0:1);
        auto work=[&](int a,int b,int c,int d)->void {
            int dx=(c-a+N)%N;
            int dy=(c-b+N)%N;
            if(dx>=dy)//顺时针
            {
                ndp[(c+1)%N]=min(ndp[(c+1)%N],d+dx+dy+1);
            }
            else
            {
                ndp[b]=min(ndp[b],d+dx);
            }
            //逆时针
            dx=(a-c+N)%N;
            dy=(b-c+N)%N;
            if(dx>=dy)
            {
                ndp[(c-1+N)%N]=min(ndp[(c-1+N)%N],d+dx+dy+1);
            }
            else
            {
                ndp[b]=min(ndp[b],d+dx);
            }
        };
        if(a==x)
        {
            for(int j=0;j<N;j++)
            {
                if(dp[j]==inf)
                {
                    continue;
                }
                work(d,j,b,dp[j]);//动点 不动点 目的点 步数
            }
        }
        else
        {
            for(int j=0;j<N;j++)
            {
                if(dp[j]==inf)
                {
                    continue;
                }
                work(j,d,b,dp[j]);
            }
        }
        x=a;
        d=b;
        dp=ndp;
    }
    int ans=*min_element(dp.begin(),dp.end());
    cout<<ans<<endl;
}
int main() {
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}//
// Created by dzl on 24-10-24.
//
