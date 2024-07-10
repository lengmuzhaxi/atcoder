/*#include<bits/stdc++.h>
using namespace std;
string s;
int n,cnt,ans=1;
int main(){
    cin>>n>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]) cnt++;
        else ans=1ll*ans*(cnt/2+1)%1000000007,cnt=0;
    }
    ans=1ll*ans*(cnt/2+1)%1000000007;
    cout<<ans;
    return 0;
}*/