#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<-1;
    }
    else
    {
        if(a+b==3)
        {
            cout<<3;
        }
        else if(a+b==5)
        {
            cout<<1;
        }
        else
        {
            cout<<2;
        }
    }
}