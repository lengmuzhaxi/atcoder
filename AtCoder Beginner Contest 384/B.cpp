
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,sum,a,b;
    cin>>n>>sum;
    for(int i=1;i<=n;i++){
        cin>>b>>a;
        if(b==1){
            if(1600<=sum && sum<=2799){
                sum+=a;
            }
        } else {
            if(1200<=sum && sum<=2399){
                sum+=a;
            }
        }
    }
    cout<<sum;
}

//
// Created by dzl on 24-12-15.
//
