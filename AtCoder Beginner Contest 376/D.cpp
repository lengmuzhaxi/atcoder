// LUOGU_RID: 184097983
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200005
#define inf 1e14
#define mod 998244353
struct info{
    int x,y;
};
int n,m;
int vis[N];
vector<int>g[N];
void bfs(){
    queue<info>q;
    q.push({1,0});
    while(!q.empty()){
        int u=q.front().x,step=q.front().y;
        q.pop();
        if(vis[u]&&u==1){cout<<step;return;}
        if(vis[u]){continue;}
        vis[u]=1;
        for(auto v:g[u]){
            q.push({v,step+1});
        }
    }
    cout<<-1;
}
signed main(){
    cin>>n>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    bfs();
    return 0;
}