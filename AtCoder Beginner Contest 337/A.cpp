#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int a[100] = { 0 }, b[100] = { 0 };
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        sum += a[i];
        cnt += b[i];
    }
    if (sum > cnt)
    {
        cout << "Takahashi";
    }
    else if (sum == cnt)
    {
        cout << "Draw";
    }
    else
    {
        cout << "Aoki";
    }
}