#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s[t+1];
    int n,sum=0;
    for(int i=0;i<t;i++)
    {
        cin>>s[i]>>n;
        sum+=n;
    }
    sort(s,s+t);
    cout<<s[sum%t];
}//
// Created by dzl on 24-5-21.
//
