#include<bits/stdc++.h>
using namespace std;
int n,k,p,ans=1e6,c=0;
set<int> S;
int main(){
    cin>>n>>k;
    vector<int> A(n+1,0);
    if(k==1){
        cout<<0;
        return 0;
    }
    for(int i=1;i<=n;++i)
        cin>>p,A[p]=i;
    for(int i=1;i<=n;++i){
        S.insert(A[i]),++c;
        if(c>k)
            S.erase(A[i-k]),--c;
        if(c==k)
            ans=min(*rbegin(S)-*begin(S),ans);
    }
    cout<<ans;
}