#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,count=3;
    cin >> a >> b;
    if(a==b)count=1;
    else{
        if((max(a,b)-min(a,b))%2==1)count=2;
        else count=3;
    }
    cout << count << endl;
}