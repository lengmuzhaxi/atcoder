/*
#include <iostream>
using namespace std;

int main() {
    int n, k, c = 0, cnt = 0;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'O') {
            c++;  // 统计连续健康牙齿数
        } else {
            c = 0;  // 遇到不健康牙齿，重置计数
        }

        if (c == k) { // 找到一组可以吃草莓的牙齿
            cnt++;
            c = 0;  // 吃完草莓后重置计数
        }
    }

    cout << cnt << endl;
    return 0;
}
*/
