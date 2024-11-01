#include<bits/stdc++.h>
using namespace std;
const int N=31;
bitset<N*N>dp[N][N];
int main(){
    int n;
    cin>>n;
    dp[0][0][0]=1;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            for(int ii=0;ii<=i-2;ii++)
                for(int jj=0;jj<=j-2;jj++)
                    dp[i][j]|=(dp[ii][jj]<<((i-ii)*(j-jj)));
    bitset<N*N>res;
    res.reset();
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            res|=dp[i][j];
    int t;
    cin>>t;
    for(int x;t;--t){
        cin>>x;
        if(res[n*n-x]) printf("Yes\n");
        else printf("No\n");
    }
}