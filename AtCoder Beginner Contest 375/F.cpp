#include<iostream>
#include<cassert>
using namespace std;
int N,M,Q;
int a[1<<17],b[1<<17],c[1<<17];
bool del[1<<17];
int op[2<<17],x[2<<17],y[2<<17];
long G[300][300];
long ans[2<<17];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>M>>Q;
    for(int i=0;i<M;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        a[i]--,b[i]--;
    }
    for(int i=0;i<Q;i++)
    {
        cin>>op[i];
        if(op[i]==1)
        {
            cin>>x[i];
            x[i]--;
            del[x[i]]=true;
        }
        else
        {
            cin>>x[i]>>y[i];
            x[i]--,y[i]--;
        }
    }
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)if(i!=j)G[i][j]=1e18;
    for(int i=0;i<M;i++)if(!del[i])
    {
        G[a[i]][b[i]]=min(G[a[i]][b[i]],(long)c[i]);
        G[b[i]][a[i]]=min(G[b[i]][a[i]],(long)c[i]);
    }
    for(int k=0;k<N;k++)for(int i=0;i<N;i++)for(int j=0;j<N;j++)
    {
        G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
    }
    for(int i=Q;i--;)
    {
        if(op[i]==1)
        {
            for(int u=0;u<N;u++)for(int v=0;v<N;v++)
            {
                G[u][v]=min(G[u][v],G[u][a[x[i]]]+c[x[i]]+G[b[x[i]]][v]);
                G[u][v]=min(G[u][v],G[u][b[x[i]]]+c[x[i]]+G[a[x[i]]][v]);
            }
        }
        else ans[i]=G[x[i]][y[i]];
    }
    for(int i=0;i<Q;i++)if(op[i]==2)cout<<(ans[i]==(long)1e18?-1L:ans[i])<<"\n";
}
//
// Created by dzl on 24-10-17.
//
