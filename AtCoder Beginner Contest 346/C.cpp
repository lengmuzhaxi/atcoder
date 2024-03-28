#include <iostream>
#include<set>
using namespace std;
using ll = long long;
int main() 
{
    int n, k;
    cin >> n >> k;
    set<int> st;
    for (int i = 0; i < n; i++) 
    {
        int a;
        cin >> a;
        if (a <= k)
        {
            st.insert(a);
        }
    }
    ll ans = (ll)k * (k + 1) / 2;
    for (int i : st)
    {
        ans -= i;
    }
    cout << ans << endl;
}
