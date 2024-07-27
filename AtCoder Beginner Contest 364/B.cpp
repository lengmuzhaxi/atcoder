#include <iostream>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    char c[n + 2][m + 2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> c[i][j];
        }
    }
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R' && b < m && c[a][b + 1] == '.')
        {
            b++;
        }
        if (s[i] == 'L' && b > 1 && c[a][b - 1] == '.')
        {
            b--;
        }
        if (s[i] == 'U' && a > 1 && c[a - 1][b] == '.')
        {
            a--;
        }
        if (s[i] == 'D' && a < n && c[a + 1][b] == '.')
        {
            a++;
        }
    }
    cout << a << ' ' << b;

    return 0;
}
