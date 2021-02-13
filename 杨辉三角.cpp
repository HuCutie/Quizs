#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
	int a[34][34] = {1};
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= i; j++)
		{
			a[i][1] = 1;
			a[i][j] = 1;
		}
	for (i = 3; i < n-1; i++)
		for (j = 2; j < i; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << a[3][2];
	return 0;
}