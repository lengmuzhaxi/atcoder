/*#include<bits/stdc++.h>
using namespace std;
const int N=10;
int n,mg,mh,x,y,ans=INT_MAX;
int a[N][N],q1[N][N],q2[N][N],mp[N];
bool b[N];
void dfs(int dep)
{
    if(dep>n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
            for(int j=i+1;j<=n;j++)
                if(q2[i][j]!=q1[mp[i]][mp[j]])
                    sum+=a[i][j];
        ans=min(ans,sum);
    }
    for(int i=1;i<=n;i++)
        if(!b[i])
        {
            b[i]=true;
            mp[dep]=i;
            dfs(dep+1);
            b[i]=false;
        }
}
int main()
{
    cin>>n>>mg;
    for(int i=1;i<=mg;i++)
    {
        cin>>x>>y;
        q1[x][y]=q1[y][x]=true;
    }
    cin>>mh;
    for(int i=1;i<=mh;i++)
    {
        cin>>x>>y;
        q2[x][y]=q2[y][x]=true;
    }
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            cin>>a[i][j];
    dfs(1);
    cout<<ans;
    return 0;
}*/