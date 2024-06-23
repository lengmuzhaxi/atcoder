#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int a[1002];
    for(int i=0;i<n*2;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<2*n-2;i++)
    {
        if(a[i+2]==a[i])
        {
            cnt++;
        }
    }
    cout<<cnt;
}//
// Created by dzl on 24-6-23.
//
