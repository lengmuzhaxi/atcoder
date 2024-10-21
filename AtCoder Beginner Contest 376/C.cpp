#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=500010;
int n,a[N],b[N];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n);
    for(int i=1;i<n;i++){
        if(a[i]>b[i]){
            cout<<-1;
            return 0;
        }
    }
    for(int i=n-1;i;i--){
        if(b[i]<a[i+1]){
            cout<<a[i+1];
            return 0;
        }
    }
    cout<<a[1];
    return 0;
}
