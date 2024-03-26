#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int>b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        b.push_back(a[i + 1] * a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << b[i] << ' ';
    }
}