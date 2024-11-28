#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> left(n + 3), right(n + 3), slash;
    for (int i = 0, j = n - 1; i < n; ++i, --j) {
        if (s[i] == '1') left[i + 1] = 1;
        left[i + 1] += left[i];
        if (s[j] == '2') right[j + 1] = 1;
        right[j + 1] += right[j + 2];
        if (s[i] == '/') slash.push_back(i + 1);
    }
    while(q--) {
        int ll, rr;
        cin >> ll >> rr;
        int l = lower_bound(slash.begin(), slash.end(), ll) - slash.begin();
        int r = upper_bound(slash.begin(), slash.end(), rr) - slash.begin();
        r = r - 1;
        int ans = 0;
        while(l <= r) {
            int mid = (l + r) / 2;
            int ind = slash[mid];
            int one = left[ind] - left[ll - 1], two = right[ind] - right[rr + 1];
            if (one >= two) {
                ans = max(ans, min(one, two) * 2 + 1);
                r = mid - 1;
            } else if (two >= one) {
                ans = max(ans, min(one, two) * 2 + 1);
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}