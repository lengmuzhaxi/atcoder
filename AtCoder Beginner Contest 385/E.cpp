/*#include<bits/stdc++.h>
using namespace std;
int t,n,ans;
vector<int>a[300001];
bool cmp(int x,int y){
    return a[x].size()<a[y].size();
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(a[i].begin(),a[i].end(),cmp);
        int m=a[i].size();
        for(int j=0;j<m;j++){
            int x=a[a[i][j]].size();
            ans=max(ans,(x-1)*(m-j)+(m-j)+1);
        }
    }
    printf("%d",n-ans);
}*/