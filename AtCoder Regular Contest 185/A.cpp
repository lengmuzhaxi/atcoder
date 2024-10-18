//
// Created by dzl on 24-10-18.
//
// LUOGU_RID: 183045736
#include<iostream>
#include<cstdio>
#define int long long
using namespace std;
signed main()
{

    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n*(n+1)%m==0||n*(n+1)%m>n)
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
    }
    return 0;
}
