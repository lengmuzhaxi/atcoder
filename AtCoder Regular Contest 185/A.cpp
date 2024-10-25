#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;
        int mod = (1ll*n*(n+1))%m;
        if(mod == 0 || mod > n)
        {
            cout << "Alice" << endl;
        }
        else
            cout << "Bob" << endl;
    }
    return 0;
}//
// Created by dzl on 24-10-25.
//
