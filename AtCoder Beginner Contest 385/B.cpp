/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int H,W,X,Y,ans=0;
    cin>>H>>W>>X>>Y;
    X--;Y--;
    vector<string> S(H);
    string T;
    for(int i=0;i<H;i++)cin>>S[i];
    cin>>T;
    for(char c : T){
        if(c=='U'&&S[X-1][Y]!='#')X--;
        if(c=='D'&&S[X+1][Y]!='#')X++;
        if(c=='L'&&S[X][Y-1]!='#')Y--;
        if(c=='R'&&S[X][Y+1]!='#')Y++;
        if(S[X][Y]=='@'){
            S[X][Y]='.';
            ans++;
        }
    }
    cout<<X+1<<" "<<Y+1<<" "<<ans;
}*/