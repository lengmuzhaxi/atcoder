/*#include<bits/stdc++.h>
using namespace std;
map<int,set<pair<int,int>>> H,W;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        char ch;
        cin>>x>>y>>ch;
        H[x].insert({y,ch=='B'});
    }
    set<int> sst;
    sst.insert(1e9+7);
    for(auto [x,st] : H){
        for(auto [y,tp] : st){
            if(tp==1&&(*sst.begin())<=y)
                cout<<"No",exit(0);
            if(tp==0)
                sst.insert(y);
        }
    }
    cout<<"Yes";
}*/