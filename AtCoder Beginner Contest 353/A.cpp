#include<iostream>
using namespace std;
int main()
{
    int n=0,f=0;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=a[0],j=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>k)
        {
            f=1;
            j=i;
            break;
        }
    }
    if(f)
    {
        cout<<j+1;
    }
    else
    {
        cout<<-1;
    }
}