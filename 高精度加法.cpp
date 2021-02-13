#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[401];
	int a[401] = {0}, a_length;
	int b[401] = {0}, b_length;
	int c[401] = {0}, c_length = 1;
	int i, x = 0;
	
	cin >> s;
	a_length = strlen(s);
	for (i = 1; i <= a_length; i++)
		a[i] = s[a_length - i] - 48;

	cin >> s;
	b_length = strlen(s);
	for (i = 1; i <= b_length; i++)
		b[i] = s[b_length - i] - 48;

	while (c_length<=a_length||c_length <= b_length)
	{
		c[c_length] = a[c_length] + b[c_length] + x;
		x = c[c_length] / 10;
		c[c_length] = c[c_length] % 10;
		c_length++;
	}

	c[c_length] = x;
	if (c[c_length] == 0)
		c_length--;

	for (i = c_length; i >= 1; i--)
		cout << c[i];

	cout << endl;
	return 0;
}