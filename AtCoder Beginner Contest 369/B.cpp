/*
#include<bits/stdc++.h>

using namespace std;

int a,b;
long long cnt = 0;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        char ch;
        int m;
        cin >> m >> ch;
        if(a == 0 && ch == 'L'){
            a = m;
        }
        if(b == 0 && ch == 'R'){
            b = m;
        }
        if(ch == 'L') cnt += abs(a - m), a = m;
        else cnt += abs(b - m), b = m;

    }
    cout << cnt << '\n';
    return 0;
}
*/
