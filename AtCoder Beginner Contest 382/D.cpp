/*#include<bits/stdc++.h>
using namespace std;
const int N=1e1+50,M=1e3+50,NM=5e5+50;
int n,m,sum,a[N],v[NM][N];
void dfs(int x,int y)
{
    if(x==n+1)
    {
        sum++;
        for(int i=1;i<=n;i++) v[sum][i]=a[i];
        return;
    }
    if(y+(n-x)*10>m) return;
    for(int i=y;i<=m;i++)
    {
        a[x]=i;
        dfs(x+1,i+10);
    }
}

int main()
{
    cin>>n>>m;
    dfs(1,1);
    cout<<sum<<endl;
    for(int i=1;i<=sum;i++)
    {
        for(int j=1;j<=n;j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}*/