#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[10001];
	int max, min, sum = 0;
	int i;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	max = a[0];
	min = a[0];
	for (i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];
	for (i = 0; i < n; i++)
		if (a[i] < min)
			min = a[i];
	for (i = 0; i < n; i++)
		sum += a[i];
	cout << max << endl;
	cout << min << endl;
	cout << sum << endl;
	return 0;
}