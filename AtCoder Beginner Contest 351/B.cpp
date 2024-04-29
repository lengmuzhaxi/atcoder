#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1][n+1],b[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                cout<<i<<' '<<j;
                break;
                cout<<'\n';
            }
        }
    }
}