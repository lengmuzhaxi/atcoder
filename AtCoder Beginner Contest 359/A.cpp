#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        string s,k="Takahashi";
        cin>>s;
        if(s.compare(k)==0)
        {
            cnt++;
        }
    }
    cout<<cnt;
}