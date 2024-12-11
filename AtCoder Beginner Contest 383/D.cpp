#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll INF = 1<<30;

vector<ll> Eratosthenes(ll N)
{
    std::vector<bool> is_prime(N+1);
    for (ll i=0;i<=N;i++)
    {
        is_prime[i] = true;
    }
    std::vector<ll> P;
    for (ll i=2;i<=N;i++)
    {
        if (is_prime[i])
        {
            for(ll j=2*i;j<=N;j+=i)
            {
                is_prime[j] = false;
            }
            P.emplace_back(i);
        }
    }
    return P;
}

int main()
{
    ll N;
    cin >> N;
    int ans = 0;
    vector<ll> P = Eratosthenes(2000000);
    for (ll x: P){
        for (ll y: P){
            if (x==y){
                continue;
            }
            if (x*x*y*y > N) break;
            ans += 1;
        }
    }
    for (ll x:P){
        if (x*x*x*x*x*x*x*x <= N){
            ans += 2;
        }
        else {
            break;

        }
    }
    cout << ans/2 << endl;


}

