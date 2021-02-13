#include<iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int flag = 1;
	int a[10001];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < n; i++)
		if (a[i] == m)
		{
			cout << i + 1 << endl;
			flag = 0;
			break;
		}
	if (flag == 1)
		cout << -1 << endl;
	return 0;
}