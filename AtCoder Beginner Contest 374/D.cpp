//
// Created by dzl on 24-10-9.
//
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define db double
const int N=10;
int n;
db ans=1e9,s,t,a[N],b[N],c[N],d[N];
bool f[N];
void dfs(int num,int x,int y,db S){
    if(num==n+1){
        ans=min(ans,S);
        return;
    }
    for(int i=1;i<=n;i++){
        if(f[i]) continue;
        f[i]=1;
        db dis=sqrt((c[i]-a[i])*(c[i]-a[i])+(d[i]-b[i])*(d[i]-b[i]))/t;
        dfs(num+1,c[i],d[i],S+sqrt((x-a[i])*(x-a[i])+(y-b[i])*(y-b[i]))/s+dis);
        dfs(num+1,a[i],b[i],S+sqrt((x-c[i])*(x-c[i])+(y-d[i])*(y-d[i]))/s+dis);
        f[i]=0;
    }
}
int main(){
    scanf("%d%lf%lf",&n,&s,&t);
    for(int i=1;i<=n;i++) scanf("%lf%lf%lf%lf",a+i,b+i,c+i,d+i);
    dfs(1,0,0,0);
    printf("%.20lf",ans);
    return 0;
}