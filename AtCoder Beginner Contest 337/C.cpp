#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() 
{
	int n = 0;
	cin >> n;
	vector<int>b;
	vector<int>a;
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i];
		b[a[i]] = i;
	}
	for (int j = -1; b[j] != 0; j = b[j]) 
	{
		cout << b[j] << " ";
	}
}

