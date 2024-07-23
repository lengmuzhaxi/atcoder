/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, c = 0;
    string s;
    cin >> n >> k >> s;
    sort(s.begin(), s.end());
    do {
        int cc = 0;
        for (int i = 0; i < n - k+1; i++) {
            string ss = s.substr(i, k), sss = ss;
            reverse(sss.begin(), sss.end());
            if (ss != sss){
                cc++;
            }
            if (cc == n - k+1) {
                c++;
            }
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << c << endl;
}
*/
