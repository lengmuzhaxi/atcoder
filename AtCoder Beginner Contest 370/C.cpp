#include<bits/stdc++.h>
using namespace std;
string s,t,c;
char a[100];
int vis[100],b;
int main(){
    cin>>s>>t;
    c=s;
    int j=0,l=s.length();
    for(int i=0;i<l;i++){
        a[i]=min(s[i],t[i]);
        if(s[i]!=t[i]) b++;
    }
    cout<<b<<endl;
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if(a[i]==t[i] && s[i]!=t[i]){
                s[i]=t[i];
                cout<<s<<endl;
                break;
            }
        }
    }
    for(int i=l-1;i>-1;i--){
        if(s[i]==c[i] && c[i]!=t[i]){
            s[i]=t[i];
            cout<<s<<endl;
        }
    }
    return 0;
}//
// Created by dzl on 24-9-10.
//
