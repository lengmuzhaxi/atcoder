
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
vector<pair<int,int> >g[N];
int n,m,ans[N],vis[N];
void dfs(int u)
{
    vis[u]=1;
    for(auto e:g[u])
    {
        int v=e.first,w=e.second;
        if(!vis[v])
        {
            ans[v]=ans[u]+w;
            dfs(v);
        }
    }
}
signed main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,-w});
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<' ';
}