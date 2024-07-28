#include<iostream>
using namespace std;
int main()
{
    int n,f=1,k=0;
    string s[200];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=="sweet"&&s[i+1]==s[i]&&i!=n-2)
        {
            f=0;
            break;
        }
        else
        {
            f=1;
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
// Created by dzl on 24-7-28.
//
