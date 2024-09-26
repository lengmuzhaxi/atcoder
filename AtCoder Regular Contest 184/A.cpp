//
// Created by dzl on 24-9-26.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int N=5010;
int n,m,q,a;
vector<int> ans;
int vis[N],tmp,cnt[100];
signed main()
{
    cin>>n>>m>>q;
    for(int i=0;i<90;i++)
    {
        int l=i*11+1,r=i*11+11;
        for(int j=l+1;j<=r;j++)
        {
            cout<<"? "<<l<<' '<<j<<'\n';
            fflush(stdout);
            cin>>a;
            if(!a)cnt[i]++,vis[j]=1;
        }
        if(cnt[i]==10)tmp=l;
    }
    for(int i=0;i<90;i++)
    {
        if(cnt[i]==10)continue;
        int l=i*11+1,r=i*11+11;
        cout<<"? "<<tmp<<' '<<l<<'\n';
        fflush(stdout);
        cin>>a;
        if(a)
        {
            ans.pb(l);
            for(int j=l+1;j<=r;j++)
                if(vis[j])ans.pb(j);
        }
        else
        {
            for(int j=l+1;j<=r;j++)
                if(!vis[j])ans.pb(j);
        }
    }
    for(int i=991;i<=1000;i++)
    {
        if(ans.size()==m)break;
        cout<<"? "<<tmp<<' '<<i<<'\n';
        fflush(stdout);
        cin>>a;
        if(a)ans.pb(i);
    }
    cout<<"! ";
    for(int i:ans)cout<<i<<' ';
    return 0;
}