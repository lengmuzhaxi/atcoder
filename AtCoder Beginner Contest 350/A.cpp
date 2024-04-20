#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0,a=1;
    for(int i=5;i>=3;i--)
    {
        sum=sum+(s[i]-'0')*a;
        a*=10;
    }
    if(sum<=349&&sum!=316&&sum>0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}//
// Created by dzl on 24-4-20.
//
