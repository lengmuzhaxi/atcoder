/*#include<bits/stdc++.h>
using namespace std;
long long n,l[200007],r[200007],mn,mx;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
        mn+=l[i];
        mx+=r[i];
    }
    if(mn>0||mx<0)
    {
        cout<<"No";
    }
    else
        {
        cout<<"Yes\n";
        for(int i=1;i<=n;i++)
        {
            cout<<min(l[i]-mn,r[i])<<' ';
            if(mn+r[i]-l[i]>=0)
            {
                mn=0;
            }
            else
            {
                mn=mn+r[i]-l[i];
            }
        }
    }
    return 0;
}*/