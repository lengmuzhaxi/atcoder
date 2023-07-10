#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n=0; 
    cin >> n;
    vector<string> A(n); 
    for (auto& a : A)
    {
        cin >> a;
    }
    auto B = A;
    for (int i=0; i < n; ++i)
    {
        if (i != 0)
        {
            B[0][i] = A[0][i - 1];
        }
        if (i != n - 1)
        {
            B[i][0] = A[i + 1][0];
        }
        if (i != n - 1)
        {
            B[n - 1][i] = A[n - 1][i + 1];
        }
        if (i != 0)
        {
            B[i][n - 1] = A[i - 1][n - 1];
        }
    }
    for (auto& a : B)
    {
        cout << a << endl;
    }
}