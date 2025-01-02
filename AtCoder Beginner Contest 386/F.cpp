#include<bits/stdc++.h>
using namespace std;
int k;
string s,t;
int f[500005][40];
int dfs(int n,int m){
    if(abs(n-m)>k){
        return k+1;
    }
    if(n==0||m==0){
        return n+m;
    }
    if(~f[m][m-n+20]){
        return f[m][m-n+20];
    }
    return f[m][m-n+20]=min(dfs(n-1,m-1)+(s[n]!=t[m]),min(dfs(n-1,m),dfs(n,m-1))+1);
}
int main(){
    cin>>k>>s>>t;
    s="q"+s,t="s"+t;
    memset(f,-1,sizeof f);
    if(dfs(s.size()-1,t.size()-1)<=k){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}//
// Created by dzl on 25-1-2.
//
