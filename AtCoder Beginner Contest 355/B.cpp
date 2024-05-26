#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0;
    cin>>n>>m;
    int a[n+1],b[m+1];
    vector<int>c;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c.push_back(a[i]);
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++)
    {
        if(s.count(c[i+1])&&s.count(c[i]))
        {
            k++;
        }
    }
    if(k)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}//
// Created by dzl on 24-5-26.
//
