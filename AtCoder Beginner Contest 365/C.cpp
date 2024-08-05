#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin >>n >> m;
    vector<ll> a(n);
    for(int i=0;i<(n);++i)
        cin >> a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<(n);++i)
    {
        if(m/(n-i)<a[i])
        {
            cout << m/(n-i) << endl;
            return 0;
        }
        m -= a[i];
    }
    cout << "infinite" << endl;
}