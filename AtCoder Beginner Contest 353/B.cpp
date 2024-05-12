#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+5],ans=1,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(sum+a[i]<=k)
        {
            sum+=a[i];
            //ans=ans;
        }
        else
        {
            ans++;
            sum=a[i];
        }
    }
    cout<<ans;
}