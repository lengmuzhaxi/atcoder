#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
    int n = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    bool a = false;
    bool b = false;
    bool c = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a = true;
        }
        else if (s[i] == 'B')
        {
            b = true;
        }
        else if (s[i] == 'C')
        {
            c = true;
        }
        if (a && b && c)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}