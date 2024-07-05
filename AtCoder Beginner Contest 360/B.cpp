/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    string now;
    cin >> a >> b;
    for(int w=1;w<a.size();++w)
    {
        for(int c=0;c<w;++c)
        {
            now ="";
            for(int i=c;i<a.size();i+=w )
            {
                now+=a[i];
            }
            if(now == b)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}*/