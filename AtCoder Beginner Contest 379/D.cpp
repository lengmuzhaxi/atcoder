// submission time: 1731421005377, tx: POST /query
#include<bits/stdc++.h>
using namespace std;
int q,op,t,h,cnt,vis[200010];
long long d[200010];
int main() {
    cin>>q;
    while(q--){
        cin>>op;
        if(op==1)cnt++;
        else if(op==2)cin>>t,d[cnt]+=t;
        else{
            cin>>h;
            int ans = 0;
            long long s = 0;
            for (int i = cnt; i >= 1; i--) {
                if (vis[i])continue;
                s+=d[i];
                if(s>=h)ans++,vis[i] = 1;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
