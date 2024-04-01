#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[105];
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%k==0)
        {
            b.push_back(a[i]/k);
        }
    }
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<' ';
    }
}