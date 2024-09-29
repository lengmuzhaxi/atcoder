/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    unordered_map<char, int> pos;
    for (int i = 0; i < 26; i++) {
        pos[S[i]] = i;
    }
    int total_distance = 0;
    char current_char = 'A';
    for (char next_char = 'B'; next_char <= 'Z'; next_char++) {
        total_distance += abs(pos[next_char] - pos[current_char]);
        current_char = next_char;  // Move the current character
    }

    cout << total_distance << endl;

    return 0;
}
*/
