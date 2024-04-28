#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],sum=0,cnt=0;
    for(int i=0;i<9;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<8;i++)
    {
        cin>>b[i];
        cnt+=b[i];
    }
    cout<<sum-cnt+1;
}