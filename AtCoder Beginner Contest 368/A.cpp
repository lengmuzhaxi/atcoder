#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> vec(a);
    for(int i = 0; i < a; i++) {
        cin >> vec.at(i);
    }
    for(int i = a - b; i < a; i++) {
        cout << vec.at(i) << " ";
    }
    for(int i = 0; i < a - b; i++) {
        cout << vec.at(i) << " ";
    }
    cout << endl;
}