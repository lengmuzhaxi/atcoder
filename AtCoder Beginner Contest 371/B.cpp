/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // 初始化一个布尔数组来跟踪每个家庭是否已经有了长子
    vector<bool> hasTaro(N + 1, false);

    for (int i = 0; i < M; ++i) {
        int family;
        char gender;
        cin >> family >> gender;

        if (gender == 'M' && !hasTaro[family]) {
            // 如果是男孩且该家庭还没有长子
            cout << "Yes" << endl;
            hasTaro[family] = true;  // 标记该家庭已有长子
        } else {
            // 如果是女孩或者该家庭已有长子
            cout << "No" << endl;
        }
    }

    return 0;
}
*/
