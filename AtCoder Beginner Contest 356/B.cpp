#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m],b[m]={0};
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            b[j]+=x;
        }
    }
    ll sum=0,f=1;
    for(int i=0;i<m;i++)
    {
        if(b[i]<a[i])
        {
            f=0;
            break;
        }
    }
    if(f)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}//
// Created by dzl on 24-6-2.
//
