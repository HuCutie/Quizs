#include<iostream>
using namespace std;
int main()
{
	int a[40001];
	int digit = 1;
	int i, temp;
	int carry, n, j;
	int k;
	a[0] = 1;
	cin >> n;
	for (i = 2; i <= n; i++)
	{
		for (j = 1, carry = 0; j <= digit; ++j)
		{
			temp = a[j - 1] * i + carry;
			a[j - 1] = temp % 10;
			carry = temp / 10;
		}
		while (carry)
		{
			digit++;
			a[digit - 1] = carry % 10;
			carry /= 10;
		}
	}
	for (k = digit; k >= 1; --k)
		cout << a[k - 1];
	cout << endl;
	return 0;
}