#include<iostream>
using namespace std;
int main()
{
	int v1, v2, t, s, l;
	int s1 = 0, s2 = 0;
	int i = 0;
	cin >> v1 >> v2 >> t >> s >> l;
	while (s1<l&&s2<l)
	{
		s1 += v1;
		s2 += v2;
		i++;
		if (s1 == l || s2 == l)
			break;
		if (s1 - s2 >= t)
			s1 -= v1 * s;
	}
	if (s1 > s2)
		cout << "R" << endl;
	else if (s2 > s1)
		cout << "T" << endl;
	else
		cout << "D" << endl;
	cout << i << endl;
	return 0;
}