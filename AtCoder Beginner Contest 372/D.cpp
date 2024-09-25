#include<bits/stdc++.h>
using namespace std;
inline int read(){
    int x=0,f=1;char c=getchar();
    while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}
    while(isdigit(c)){x=(x<<1)+(x<<3)+(c^48);c=getchar();}return x*f;
}
const int N=2e5+2;
int n=read(),h[N],s[N],ans[N],top,cnt;
signed main(){
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    s[++top]=N;
    for(int i=1;i<=n;++i) h[i]=read();
    for(int i=n;i;--i){
        ans[i]=top-1;
        while(s[top]<h[i]) --top;
        s[++top]=h[i];
    }
    for(int i=1;i<=n;++i) cout<<ans[i]<<' ';
    return 0;
}