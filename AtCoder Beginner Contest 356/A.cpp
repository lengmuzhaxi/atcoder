#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,b;
    cin>>n>>p>>b;
    int a[n];
    int i=p,j=b;
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
    }
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<' ';
    }
}//
// Created by dzl on 24-6-1.
//
