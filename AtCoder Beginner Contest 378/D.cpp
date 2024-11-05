#include<bits/stdc++.h>
using namespace std;
int h,w,k,i,j,r;
char c[15][15];
#define q(x,y,s)if(c[x][y]=='.')f(x,y,s)
#define w(u,v)q(x+u,y+v,s)
#define t(d)c[x][y]=d;
void f(int x,int y,int s){
    if(s++==k){
        ++r;
        return;
    }
    c[x][y]='#';
    w(1,0);
    w(0,1);
    w(-1,0);
    w(0,-1);
    c[x][y]='.';
}
int main(){
    cin>>h>>w>>k;
    for(int i=1;i<=h;++i)
        for(int j=1;j<=w;++j)
            cin>>c[i][j];
    for(int i=1;i<=h;++i)
        for(int j=1;j<=w;++j)
            if(c[i][j]=='.')
                f(i,j,0);
    cout<<r;
}