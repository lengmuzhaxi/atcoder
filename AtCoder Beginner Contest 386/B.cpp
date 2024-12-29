#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int i = 0, cnt = 0, n = s.size();
    while (i < n){
        if (s[i] == '0' && i + 1 < n && s[i + 1] == '0'){
            cnt++;
            i += 2;
            continue;
        }
        cnt++;
        i++;
    }
    printf("%d", cnt);
    return 0;
}