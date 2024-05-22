#include <bits/stdc++.h>

using namespace std;

struct Card {
    int a;
    int c;
    int index;
};

int main() {
    // Input
    int n;
    cin >> n;
    vector<Card> cards(n);
    for (int i = 0; i < n; ++i) {
        int a, c;
        cin >> a >> c;
        cards[i] = {a, c, i};
    }

    // Sort in ascending order of C[i]
    sort(cards.begin(), cards.end(), [&](const auto &l, const auto &r) {
        return l.c < r.c;
    });

    // Compute the answer
    vector<int> ans;
    int v = 0;
    for (int i = 0; i < n; ++i) {
        if (cards[i].a > v) {
            v = cards[i].a;
            ans.push_back(cards[i].index);
        }
    }
    sort(ans.begin(), ans.end());

    // Print
    const int m = (int)ans.size();
    cout << m << endl;
    for (int i = 0; i < m; ++i) {
        cout << ans[i] + 1;
        if (i == m - 1) {
            cout << endl;
        } else {
            cout << ' ';
        }
    }
}
//
// Created by dzl on 24-5-22.
//
