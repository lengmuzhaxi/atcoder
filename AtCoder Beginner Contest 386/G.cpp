
#include<bits/stdc++.h>
#define int long long
const int mod=998244353;
using namespace std;
int n,m,k,c[501][501],p[501][250001],f[501],ans;
int ff(int x){return x*(x-1)/2;}
signed main(){
    cin>>n>>m;
    fill(f,f+n+1,-1);
    for(int i=0;i<=500;i++){
        c[i][0]=p[i][0]=1;
        for(int j=1;j<=i;j++)c[i][j]=(c[i-1][j]+c[i-1][j-1])%mod;
        for(int j=1;j<=250000;j++)p[i][j]=p[i][j-1]*i%mod;
    }ans=(n-m-1)*p[m][ff(n)]%mod;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            f[j]=p[m][ff(j)];
            for(int k=1;k<j;k++)f[j]=(f[j]-f[k]*c[j-1][k-1]%mod*p[m-i][k*(j-k)]%mod*p[m][ff(j-k)]%mod+mod)%mod;
            ans=(ans+c[n][j]*f[j]%mod*p[m-i][j*(n-j)]%mod*p[m][ff(n-j)]%mod)%mod;
        }
    }cout<<ans;
}//
// Created by dzl on 25-1-3.
//
