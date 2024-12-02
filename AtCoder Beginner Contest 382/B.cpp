#include <iostream>
#include <string>
using namespace std;

int main() {

    int N, D;
    string S;
    cin >> N >> D >> S;


    for (int day = 0; day < D; ++day) {
        for (int i = N - 1; i >= 0; --i) {
            if (S[i] == '@') {
                S[i] = '.';
                break;
            }
        }
    }

    // 输出结果
    cout << S << endl;

    return 0;
}
//
// Created by dzl on 24-12-2.
//
