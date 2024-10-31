#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(m),b(m);
    set<int>row,col,diag1,diag2;
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
        row.insert(a[i]);
        col.insert(b[i]);
        diag1.insert(a[i]+b[i]);
        diag2.insert(a[i]-b[i]);
    }
    ll res=1ll*(n-row.size())*(n-col.size());
    for(auto &x:diag1)
    {
        set<int>bad;
        for(auto &i:row)
        {
            int j=x-i;
            if(j>=1&&j<=n)bad.insert(i);
        }
        for(auto &j:col)
        {
            int i=x-j;
            if(i>=1&&i<=n)bad.insert(i);
        }
        int cnt=(x<=n+1?x-1:2*n-x+1);
        cnt-=bad.size();
        res-=cnt;
    }
    for(auto &x:diag2)
    {
        set<int>bad;
        for(auto &i:row)
        {
            int j=i-x;
            if(j>=1&&j<=n)bad.insert(i);
        }
        for(auto &j:col)
        {
            int i=j+x;
            if(i>=1&&i<=n)bad.insert(i);
        }
        for(auto &y:diag1)
        {
            if((x+y)%2)continue;
            int i=(x+y)/2;
            int j=i-x;
            if(i>=1&&i<=n&&j>=1&&j<=n)bad.insert(i);
        }
        int cnt=(x<=0?x+n:n-x);
        cnt-=bad.size();
        res-=cnt;
    }
    cout<<res;
    return 0;
}//
// Created by dzl on 24-10-31.
//
