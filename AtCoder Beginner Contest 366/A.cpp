#include<iostream>
using namespace std;
int main()
{
    int n,t,a;
    cin>>n>>t>>a;
    if((n-(t+a)+a<t)||(n-(t+a)+t<a))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}