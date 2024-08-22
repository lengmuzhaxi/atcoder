#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Check if Takahashi is awake at A o'clock
    if (B < C) {
        if (A >= B && A < C) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    } else { // B > C, meaning the sleep period wraps around midnight
        if (A >= B || A < C) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}

