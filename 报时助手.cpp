#include<iostream>
using namespace std;
int main()
{
	int h, m;
	char min[22][10] = { "zero","one","two","three","four","five","six","seven",
						  "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
						  "seventeen","eighteen","nineteen","twenty" };
	
	char hour[4][10] = { "twenty","thirty","forty","fifty" };

	cin >> h >> m;
	if (m == 0)
		if (h < 21)
			cout << min[h] << " o' clock";
		else
			cout << hour[0] << " " << min[h % 10 ] << " o' clock";
	else
	{
		if (h < 21)
			cout << min[h];
		else
			cout << hour[0] << " " << min[h % 10];
		if (m < 21)
			cout << " " << min[m];
		else
			cout << " " << hour[m / 10 - 2] << " " << min[m % 10];
	}
	cout << endl;
	return 0;
}