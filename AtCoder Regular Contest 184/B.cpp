#include<bits/stdc++.h>
using namespace std;
int S(int n){
    return n-n/2-n/3+n/6;
}
int a[105];
int bp[1<<19],f[35][1<<19];
map<int,int>an;
int ff(int n){
    if(n==1)return 1;
    int c=0,h=0;
    for(int i=1;;++i){
        int x=n,d=0;
        while(x>=3)++d,x/=3;
        a[++c]=d+1;h+=d+1;
        n/=2;
        if(!n)break;
    }
    if(an[h])return an[h];
    int zb=(1<<a[1])-1;
    for(int i=0;i<(1<<a[1]);++i){
        f[1][i]=1e9;
        if(((i|(i<<1))&zb)==zb)f[1][i]=bp[i];
    }
    for(int j=1;j<(1<<a[1]);j<<=1)for(int k=0;k<(1<<a[1]);k+=j+j)
        for(int l=k;l<k+j;++l)f[1][l]=min(f[1][l],f[1][l+j]);
    for(int i=2;i<=c;++i){
        int bz=(1<<a[i])-1;
        for(int j=0;j<(1<<a[i]);++j){
            f[i][j]=bp[j]+f[i-1][bz-((j|(j<<1))&bz)];
        }
        for(int j=1;j<(1<<a[i]);j<<=1)for(int k=0;k<(1<<a[i]);k+=j+j)
            for(int l=k;l<k+j;++l)f[i][l]=min(f[i][l],f[i][l+j]);
    }
    return an[h]=f[c][0];
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<(1<<19);++i)bp[i]=__builtin_popcount(i);
    int ans=0;
    for(int l=1;l<=n;){
        int r=n/(n/l);
        ans+=(S(r)-S(l-1))*ff(n/l);
        l=r+1;
    }
    printf("%d\n",ans);
    return 0;
}