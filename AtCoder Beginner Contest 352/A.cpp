#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    if(y>=min(m,x)&&y<=max(m,x))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}