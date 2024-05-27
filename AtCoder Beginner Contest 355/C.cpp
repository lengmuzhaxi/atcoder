#include<bits/stdc++.h>
using namespace std;

const int N=2e3+5;

int n,h[N],l[N],d1,d2,t;

int main(){
    cin>>n>>t;
    for(int j=1;j<=t;++j){
        int i;cin>>i;
        int x=(i-1)/n+1,y=i-(x-1)*n;
        h[x]++,l[y]++;
        if(x==y)d1++;
        if(x+y==n+1)d2++;
        if(h[x]==n||l[y]==n||d1==n||d2==n){
            cout<<j;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
//
// Created by dzl on 24-5-27.
//
