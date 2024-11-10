#include<bits/stdc++.h>
using namespace std;
long long n,m,o,an;
struct node{long long a,b;}a[200005];
int cmp(node x,node y){return x.a<y.a;}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].a;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].b;
    }
    sort(a+1,a+m+1,cmp);
    o=1;
    for(int i=1;i<=m;i++)
    {
        if(a[i].a<=o)
        {
            an=an+((2*(o-a[i].a)+a[i].b-1)*a[i].b/2);
            o+=a[i].b;
        }
        //		cout<<an<<" "<<o<<endl;
    }
    if(o!=n+1)
    {
      cout<<-1;
        return 0;
    }
    cout<<an;
    return 0;
}