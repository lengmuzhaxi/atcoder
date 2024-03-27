#include<iostream>
using namespace std;
using ll = long long;
int main()
{
    ll w, b;
    cin >> w >> b;
    string t = "wbwbwwbwbwbw";
    string s;
    for (int i = 0; i < 1000; i++)
    {
        s += t;
    }
    int n = s.size();
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        ll x = 0;
        ll y = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == 'w')
                x++;
            else
                y++;

            if (x == w && y == b)
                ok = true;

            if (x > w || b < y)
                break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}