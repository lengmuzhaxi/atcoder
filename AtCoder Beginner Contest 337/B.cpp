#include<iostream>
using namespace std;
int main()
{
    int f = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}