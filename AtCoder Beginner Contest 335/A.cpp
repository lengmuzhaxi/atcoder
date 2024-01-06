#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        cout << s[i];
    }
    cout << '4';
}