/*#include <bits/stdc++.h>
using namespace std;
string g[15];
int n, m, lim;
int maxx;
int main(){
    cin>>n>>m>>lim;
    for(int i=0;i<n;i++) cin>>g[i];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(g[i][j]=='.'){
        for(int x=0;x<n;x++) for(int y=0;y<m;y++) if(g[x][y]=='.'){
            int cnt=0;
            for(int u=0;u<n;u++) for(int v=0;v<m;v++) if(g[u][v]=='.'){
                if(abs(u-x)+abs(v-y)<=lim||abs(u-i)+abs(v-j)<=lim) cnt++;
            }
            maxx=max(maxx, cnt);
        }
    }
    cout<<maxx<<endl;
    return 0;
}*/