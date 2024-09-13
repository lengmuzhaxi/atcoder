#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        int num=a/5;
        cnt+=num*3;
        a-=num*5;
        while(a>0){
            cnt++;
            if(cnt%3==0)a-=3;
            else a--;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
//
// Created by dzl on 24-9-13.
//
