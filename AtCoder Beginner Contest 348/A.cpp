#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="oox";
    int k=n/3,j=n-k*3;
    while(k--)
    {
        cout<<"oox";
    }
    while(j--)
    {
        cout<<'o';
    }
}