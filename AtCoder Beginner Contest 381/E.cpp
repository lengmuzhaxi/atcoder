#include<bits/stdc++.h>
using namespace std;
int a,b,as[100002],bs[100002],d,e,f,cs[100001],l,r,m,out;
string c;

int check(int m)
{
    if(m>f)return 1;
    if(m<e)return 0;
    int c1=as[m-1]-as[e-1],c2=bs[f]-bs[m];
    out=max(out,min(c1,c2)*2+1);
    return c1>c2;
}

int main()
{
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        as[i]=as[i-1];bs[i]=bs[i-1];
        if(c[i-1]=='1')as[i]++;
        else if(c[i-1]=='2')bs[i]++;
        else cs[++d]=i;
    }
    for(int i=1;i<=b;i++)
    {
        cin>>e>>f;out=0;
        for(l=1,r=d;l<=r;)
        {
            m=(l+r)/2;
            if(check(cs[m]))r=m-1;
            else l=m+1;
        }
        cout<<out<<endl;
    }
}