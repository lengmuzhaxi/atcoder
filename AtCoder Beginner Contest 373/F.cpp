/*#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=3e3+10;
int n,W,ans;
int f[N][N];
vector<int>g[N];
signed main()
{
    cin>>n>>W;
    for(int i=1;i<=n;i++)
    {
        int w,v;
        cin>>w>>v;
        for(int j=1;j*w<=W;j++)g[w].push_back(v-j*2+1);
    }

    for(int w=1;w<=W;w++)
    {
        sort(g[w].begin(),g[w].end()); reverse(g[w].begin(),g[w].end());
        int tim=0;
        memcpy(f[w],f[w-1],sizeof(f[w]));
        for(auto v:g[w]){
            tim++; if(tim*w>W) break;

            for(int j=W;j>=w;j--)
            {
                //	if(j-w>=0)
                f[w][j]=max(f[w][j],f[w][j-w]+v);
                ans=max(ans,f[w][j]);
                //	printf("w=%lld j=%lld f[w,j]=%lld\n",w,j,f[w][j]);
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}*/