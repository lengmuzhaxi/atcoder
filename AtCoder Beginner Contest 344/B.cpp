#include <iostream>
using namespace std;
int main() 
{
	int x, i = 0,a[105];
	while (cin >> x) 
	{
		i++;
		a[i] = x;
	}
	for (int j = i; j >= 1; j--) 
	{
		cout << a[j] << "\n";
	}
}