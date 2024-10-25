#include <bits/stdc++.h>

using namespace std;

int n;
long long p, pre, need, sum;
void solve(){
    cin >> n;

    pre = need = sum = 0;
    for(int i = 1; i <= n; ++i){
        cin >> p; sum += p;
        if(p > pre){
            if(need < p - pre)need = 0;
            else need -= p - pre;
        }
        else need += pre - p;
        if(!need){
            pre = sum / i + !!(sum % i);
        }
    }
    cout << (need ? "No\n" : "Yes\n");
}

int main()
{
    if(fopen("input.txt", "r")){
        freopen("input.txt", "r", stdin);
    }cin.tie(NULL)->sync_with_stdio(false);

    int T; cin >> T;
    while(T--)solve();
    return 0;
}
