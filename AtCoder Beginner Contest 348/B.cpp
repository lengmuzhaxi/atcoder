#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a(n+1),b(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for(int i=1;i<=n;i++)
    {
        int k=0,m=0,p=0;
        for(int j=1;j<=n;j++)
        {
            k=(a[i].second-a[j].second)*(a[i].second-a[j].second)+(a[i].first-a[j].first)*(a[i].first-a[j].first);
            if(k>m)
            {
                m=k;
                p=j;
            }
        }
        cout<<p<<'\n';
    }
}