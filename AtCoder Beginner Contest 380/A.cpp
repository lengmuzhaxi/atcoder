#include<bits/stdc++.h>
using namespace std;
int n, m;
int k;
const int N = 110;

string s[N];
int a[N];
int main(){
    int n;
    cin >> n;
    while(n){
        a[n%10]++;
        n/=10;
    }
    if(a[1] == 1 && a[2] == 2 && a[3] == 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}