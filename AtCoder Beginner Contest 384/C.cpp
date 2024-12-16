#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++) cin>>a[i];
    pair<int,string> s[32];
    for(int st=0;st<32;st++){
        for(int j=0;j<5;j++){
            if(st>>j&1){
                s[st].first-=a[j];
                s[st].second+='A'+j;
            }
        }
    }
    sort(s,s+32);
    for(auto e:s) cout<<e.second<<endl;
}
