#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    int  j=1;
    while(j-1<=t)
    {
        j*=2;
        cnt++;
    }
    cout<<cnt;
}//
// Created by dzl on 24-5-20.
//
