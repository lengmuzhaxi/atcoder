/*#include<bits/stdc++.h>
using namespace std;
string s,t,ss;
int k;
int main()
{
    cin>>k>>s>>t;
    if(abs((int)s.size()-(int)t.size())>1) cout<<"No\n";
    else
    {
        int sum=0;
        for(int i=0,j=0;i<s.size()&&j<t.size();)
        {
            if(s[i]!=t[j])
            {
                sum++;
                if(s.size()>t.size()) i++;
                else if(s.size()<t.size())j++;
            }
            i++,j++;
        }
        cout<<(sum>1?"No":"Yes");
    }
    return 0;
}*/