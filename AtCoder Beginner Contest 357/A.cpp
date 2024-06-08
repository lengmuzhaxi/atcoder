#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],cnt=0,sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(k>=sum)
    {
        cout<<n;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(k>=a[i])
            {
                k-=a[i];
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt;
    }
}//
// Created by dzl on 24-6-8.
//
