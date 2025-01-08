/*#include<bits/stdc++.h>
using namespace std;
char a[1010][1010];
int n,m,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},xs,ys,xe,ye;
bool vis[1010][1010][4];
int bfs()
{
    queue<array<int,4>>q;
    for(int i=0;i<4;i++) q.push({xs,ys,i,0}),vis[xs][ys][i]=1;
    while(!q.empty())
    {
        auto[x,y,d,s]=q.front();q.pop();
        if(x==xe&&y==ye) return s;
        for(int i=-1;i<=1;i+=2)
        {
            int nd=(d+i+4)%4,nx=x+dx[nd],ny=y+dy[nd];
            if(a[nx][ny]=='.'&&vis[nx][ny][nd]==0) q.push({nx,ny,nd,s+1}),vis[nx][ny][nd]=1;
        }
    }
    return -1;
}//宽搜模版
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='S'){xs=i;ys=j;a[i][j]='.';}
            if(a[i][j]=='G'){xe=i;ye=j;a[i][j]='.';}
        }
    }
    cout<<bfs();
    return 0;
}*/