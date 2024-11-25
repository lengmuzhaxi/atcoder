#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = " " + s;
    int ret = 0;
    for(int i = 1;i <= n;i++)
    {
        if(s[i] == '/')
        {
            int p = i - 1;
            int q = i + 1;
            while(s[p] == '1' && s[q] == '2')
            {
                p--;
                q++;
            }
            ret = max(ret,q - p - 1);
        }
    }
    cout << ret;
    return 0;
}//
// Created by dzl on 24-11-25.
//
