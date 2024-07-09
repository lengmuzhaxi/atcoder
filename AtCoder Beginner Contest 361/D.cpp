#include<bits/stdc++.h>
using namespace std;
map<string,int>d;
int main(){
    int n;
    string s,t;
    cin >>n >>s>>t;
    s += "..";
    t += "..";
    queue <string> q;
    q.push(s);
    d[s]= 1;
    while(!q.empty()){
        string t=q.front();
        q.pop();
        int a;
        for(int i=0;i<t.size(); i++)if(t[i]=='.') a=i;
        for(int i=0;i<t.size()- 1; i++){
            if(t[i] =='.'|| t[i + 1]=='.')continue;
            string h=t;swap(h[i],h[a-1]),swap(h[i + 1],h[a]);
            if(!d[h]){
                d[h]= d[t]+ 1, q.push(h);
            }
        }
    }
    cout<< d[t]-1<< endl;
}//
// Created by dzl on 24-7-9.
//
