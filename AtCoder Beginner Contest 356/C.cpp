#include<bits/stdc++.h>
using namespace std;
int n,m,K,ans,c[105],a[105][20],r[105];
string s;
int main()
{
    cin>>n>>m>>K;
    for(int i=1;i<=m;i++)
    {
        cin>>c[i];
        for(int j=1;j<=c[i];j++)cin>>a[i][j];
        cin>>s;
        if(s=="o")r[i]=1;
        if(s=="x")r[i]=0;
    }
    for(int i=0,res,f;i<(1<<n);i++)
    {
        f=1;
        for(int j=1;j<=m;j++)
        {
            res=0;
            for(int k=1;k<=c[j];k++)res+=((i>>(a[j][k]-1))&1);
            if(res>=K&&!r[j])f=0;
            if(res<K&&r[j])f=0;
        }
        ans+=f;
    }
    cout<<ans;
}//
// Created by dzl on 24-6-3.
//
