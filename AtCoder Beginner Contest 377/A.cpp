/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    cin>>t;
    if(t=="ABC"||t=="BAC"||t=="CBA"||t=="ACB"||t=="BCA"||t=="CAB")
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<(s=="ABC"?"Yes":"No");
    return 0;
}