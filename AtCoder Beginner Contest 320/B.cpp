#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	string s, res;
	cin >> s;
    for (int i = 0; i < s.size(); i++) 
    {
        int l = i - 1, r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            l--, r++;
            if (res.size() < r - l - 1)
            {
                res = s.substr(l + 1, r - l - 1);
            }
        }
        l = i, r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            l--, r++;
            if (res.size() < r - l - 1)
            {
                res = s.substr(l + 1, r - l - 1);
            }
        }
    }
    cout << res.size();
}