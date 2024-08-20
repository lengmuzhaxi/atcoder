#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    int M = 0;
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
        M = max(M, (int)S[i].length());
    }

    vector<string> T(M, string(N, '*'));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < S[i].length(); ++j) {
            T[j][N - i - 1] = S[i][j];
        }
    }

    for (int i = 0; i < M; ++i) {
        T[i] = T[i].substr(0, T[i].find_last_not_of('*') + 1);
        cout << T[i] << endl;
    }

    return 0;
}
