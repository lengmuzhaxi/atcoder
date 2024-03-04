#include <iostream>
#include <string>
using namespace std;
int main() 
{
    long long N, Ans = 1; 
    cin >> N;
    for (long long i = 0; i * i * i <= N; i++) 
    {
        string S = to_string(i * i * i), T = S;
        reverse(T.begin(), T.end());
        if (S == T)
        {
            Ans = i * i * i;
        }
    }
    cout << Ans << endl;
}