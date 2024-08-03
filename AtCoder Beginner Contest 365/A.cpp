#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if((m%100!=0&&m%4==0)||(m%400==0))
    {
        cout<<366;
    }
    else
    {
        cout<<365;
    }
}