// LUOGU_RID: 177502688
#include<bits/stdc++.h>
#define pb emplace_back
#define pob pop_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef double db;
const ll maxn=100007,ee=1000000000000000007ll,p=998244353;
ll n,m,pri[7]={2,3,5,7,11,13},buc[27][17];
void ups(ll &a,ll b){a=(a+b>=p?a+b-p:a+b);}
struct Mat{
    ll a[75][75];
    Mat(void){memset(a,0,sizeof(a));}
    Mat operator*(Mat &o){
        Mat res;
        for(int i=0;i<=64;i++)for(int j=0;j<=64;j++){
            for(int k=0;k<=64;k++) ups(res.a[i][j],a[i][k]*o.a[k][j]%p);
        }
        return res;
    }
}f;
signed main(void){
    //freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        for(int j=0;j<6;j++)if(i%pri[j]==0){
            for(ll tmp=i;tmp%pri[j]==0;tmp/=pri[j]) buc[i][j]++;
        }
    }
    for(int S=0;S<64;S++){
        for(int j=1;j<=m;j++){
            f.a[S][S]++,f.a[S][64]++;
            for(int T=S;T;T=(T-1)&S){
                ll sum=1;
                for(int k=0;k<6;k++)if(((T>>k)&1)&&((S>>k)&1)) sum*=buc[j][k];
                f.a[S^T][S]+=sum,f.a[S^T][64]+=sum;
            }
        }
    }
    f.a[64][64]=1;
    Mat E=f; n--;
    for(;n;n>>=1,f=f*f)if(n&1) E=E*f;
    cout<<E.a[0][64]<<"\n";
    return 0;
}