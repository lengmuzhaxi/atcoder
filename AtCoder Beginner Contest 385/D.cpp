/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char opt;
ll n,m,x,y,X,Y,ans,s;
map<pair<ll,ll>,ll> mp;
map<ll,map<ll,bool> > mp1,mp2;
int main(){
    cin >> n >> m >> x >> y;
    for(int i=1;i<=n;i++) cin >> X >> Y,mp1[X][Y]=mp2[Y][X]=1;
    if(mp1[x].count(y)) mp1[x].erase(y),mp2[y].erase(x);
    for(int i=1;i<=m;i++){
        cin >> opt >> s;
        if(opt=='D') mp1[x].erase(mp1[x].lower_bound(y-s),mp1[x].upper_bound(y)),y-=s;
        if(opt=='U') mp1[x].erase(mp1[x].lower_bound(y),mp1[x].upper_bound(y+s)),y+=s;
        if(opt=='L') mp2[y].erase(mp2[y].lower_bound(x-s),mp2[y].upper_bound(x)),x-=s;
        if(opt=='R') mp2[y].erase(mp2[y].lower_bound(x),mp2[y].upper_bound(x+s)),x+=s;
    }
    for(auto x:mp1) for(auto y:x.second) mp[{x.first,y.first}]++;
    for(auto y:mp2) for(auto x:y.second) mp[{x.first,y.first}]++;
    for(auto x:mp) ans+=x.second>=2;
    cout << x << " " << y << " " << n-ans;
    return 0;
}*///
// Created by dzl on 24-12-26.
//
