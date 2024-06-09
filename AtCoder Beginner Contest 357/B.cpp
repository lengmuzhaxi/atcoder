#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k=0,cnt=0;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]<97)
        {
            k++;
        }
        else
        {
            cnt++;
        }
    }
    if(k>cnt)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>=97)
            {
                s[i]-=32;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]<97)
            {
                s[i]+=32;
            }
        }
    }
    cout<<s;
}//
// Created by dzl on 24-6-9.
//
