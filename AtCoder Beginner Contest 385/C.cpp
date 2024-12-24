#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int max_count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (h[i] == h[j]) {
                int diff = j - i;
                int count = 2;
                int x = j + diff;
                while (x < n && h[x] == h[i]) {
                    count++;
                    x += diff;
                }
                max_count = max(max_count, count);
            }
        }
    }
    cout << max_count << endl;
    return 0;
}
//
// Created by dzl on 24-12-24.
//
