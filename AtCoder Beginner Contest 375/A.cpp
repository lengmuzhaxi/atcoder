#include<iostream>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int cnt=0;
    for(int i=1;i<n-1;i++)
    {
        if(s[i]=='.'&&s[i-1]=='#'&&s[i+1]=='#')
        {
            cnt++;
        }
    }
    cout<<cnt;
}