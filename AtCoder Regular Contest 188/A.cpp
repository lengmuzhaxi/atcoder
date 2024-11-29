
#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

const int N=100,p=998244353;
int n,m,ans;
string s;
map<array<int,5>,int>f[N];

int main(){

    cin>>n>>m>>s; s=" "+s;
    f[0][{0,0,0,0,0}]=1;

    for(int i=0;i<n;i++)
        for(auto j:f[i]){
            array<int,5>t=j.x;
            if(s[i+1]=='A'||s[i+1]=='?')
                (f[i+1][{t[3]+1,t[2],t[1],t[0],t[4]+t[0]}]+=j.y)%=p;
            if(s[i+1]=='B'||s[i+1]=='?')
                (f[i+1][{t[2],t[3]+1,t[0],t[1],t[4]+t[1]}]+=j.y)%=p;
            if(s[i+1]=='C'||s[i+1]=='?')
                (f[i+1][{t[1],t[0],t[3]+1,t[2],t[4]+t[2]}]+=j.y)%=p;
        }

    for(auto j:f[n])
        if((j.x)[4]>=m) (ans+=j.y)%=p;
    cout<<ans;
}