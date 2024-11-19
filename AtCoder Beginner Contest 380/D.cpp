/*#include<iostream>
#include<cstring>
using namespace std;
#define int long long
const int N=2e5+10;
string s;
char f(char x){
    if(x>='A'&&x<='Z') return x-'A'+'a';
    return x-'a'+'A';
}
signed main(){
    int q;
    cin>>s>>q;
    s=" "+s;
    int n=s.size()-1;
    while(q--){
        int a,b=n,flg=0;
        cin>>a;
        while(b<a) b*=2;
        while(a>n){
            b/=2;
            if(a>b) flg^=1,a-=b;
        }
        if(flg) cout<<f(s[a])<<' ';
        else cout<<s[a]<<' ';
    }
    return 0;
}*/