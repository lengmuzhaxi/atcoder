/*#include<bits/stdc++.h>
using namespace std;
long long k[25];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k[i];
    }
    long long m=1e18;
    for(int i=1;i<=(1<<n)-1;i++){
        long long a=0,b=0;
        for(int j=0;j<n;j++){
            if(i>>j&1){
                a+=k[n-j];
            }
            else{
                b+=k[n-j];
            }
        }
        m=min(m,max(a,b));
    }
    cout<<m;
    return 0;
} */