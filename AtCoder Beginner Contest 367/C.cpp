#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    for (int &r : R) cin >> r;

    vector<int> seq(N, 1);

    while (true) {
        int sum = 0;
        for (int i = 0; i < N; i++) sum += seq[i];

        if (sum % K == 0) {
            for (int i = 0; i < N; i++) cout << seq[i] << " ";
            cout << endl;
        }

        int pos = N - 1;
        while (pos >= 0 && seq[pos] == R[pos]) {
            seq[pos] = 1;
            pos--;
        }

        if (pos < 0) break;

        seq[pos]++;
    }

    return 0;
}
//
// Created by dzl on 24-8-26.
//
