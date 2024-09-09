/*#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main() {
    int n,b,k;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    int x=1;
    for(int i=1;i<=n;i++){
        k=i;
        if(x<k){
            swap(x,k);
        }
        x=a[x][k];
    }
    cout<<x;
}*/