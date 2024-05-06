#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T; cin>>S>>T;
    int pos = 0;
    for(char s : S)
        cout<<(pos = T.find(s, pos)+1)<<' ';
    return 0;
}