
#include<iostream>
#include<map>
using namespace std;
int N,a,i=1;map<int,int>M;
int main(){
    cin>>N;
    for(;i<=N;i++){
        cin>>a;
        cout<<M[a]-1<<' ';
        M[a]=i+1;
    }
}