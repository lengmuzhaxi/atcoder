/*#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[2024];
signed main()
{
    int N,K;
    cin >> N>>K;
    int i;
    for (i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        arr[a] = i+1;
    }
    vector<pair<int, int>>t;
    for (i = N; i >= 1; i--)
    {
        int j;
        int b = i;
        for (j = i+1; j <= N; j++)
        {
            if (arr[b] >= arr[j] + K)
            {
                t.push_back({ arr[j], arr[b] });
                swap(arr[b], arr[j]);
                b = j;
            }
        }
    }
    cout << t.size() << '\n';
    for (i = 0; i < t.size(); i++)
    {
        cout << t[i].first << ' ' << t[i].second << '\n';
    }
}*
// Created by dzl on 24-7-11.
//
