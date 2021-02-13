#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int i, j, n, x, flag = 1;
	cout << "This is a sorting programm." << endl
		 << "Now please inter the how many numbers you want to sort: ";
	cin >> n;
	cout << "Now please enter the #NO.1 number: ";
	cin >> a[0];
	i = 1;
	while (i < n)
	{
		cout << "Now please enter the #NO." << i+1 << " number: ";
		cin >> a[i];
		if (a[i] >= a[i - 1])
		{
			i++;
			continue;
		}
		else
		{
			cout << "Enter ERROR! Please enter a bigger number!" << endl;
			continue;
		}
	}
	cout << "Now enter an integer to insert the array: ";
	cin >> x;
	for (i = 0; i < n; ++i) 
	{
		if (a[i] > x) 
		{
			for (j = n; j > i; --j)
				a[j] = a[j - 1];
			flag = 0;
			a[i] = x;
			break;
		}
	}
	if (flag == 1) 
		a[n] = x;
	for (i = 0; i <= n; i++)
		cout << a[i] << "\t";
	cout << endl;
	return 0;
}