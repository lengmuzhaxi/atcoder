/*#include<bits/stdc++.h>
using namespace std;
long long a,b,bs[9][2]={{0,0},{1,2},{2,1},{-1,-2},{-2,-1},{-1,2},{1,-2},{-2,1},{2,-1}},c,d,e;
map<int,map<int,int> >as;

int main()
{
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        cin>>c>>d;
        for(int j=0;j<9;j++)
        {
            int cc=c+bs[j][0],dd=d+bs[j][1];
            if(cc>0&&dd>0&&cc<=a&&dd<=a&&!as[cc][dd])as[cc][dd]=1,e++;
        }
    }
    cout<<a*a-e;
}*/