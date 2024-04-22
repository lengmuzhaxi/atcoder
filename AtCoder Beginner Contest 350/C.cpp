#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[200009];
int n,a[200009],k=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        while(a[i]!=i){
            p[++k]={i,a[i]};
            swap(a[i],a[a[i]]);
        }
    } cout<<k<<endl;
    for(int i=1;i<=k;i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;
    return 0;
}
//
// Created by dzl on 24-4-22.
//
