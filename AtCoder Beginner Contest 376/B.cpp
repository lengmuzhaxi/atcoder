#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,ans=0,l=1,r=2;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        char s;
        int c;
        cin>>s>>c;
        if(s=='L'){
            if(r<max(l,c) and r>min(l,c))ans+=(min(c,l)+a-max(c,l));
            else ans+=(max(l,c)-min(l,c));
            l=c;
        }
        else{
            if(l<max(r,c) and l>min(r,c))ans+=(min(c,r)+a-max(c,r));
            else ans+=(max(r,c)-min(r,c));
            r=c;
        }
    }
    cout<<ans;
    return 0;
}
//
// Created by dzl on 24-10-20.
//
