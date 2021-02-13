/*
问题描述:
回文串，是一种特殊的字符串，它从左往右读和从右往左读是一样的。小龙龙认为回文串才是完美的。现在给你一个串，它不一定是回文的，请你计算最少的交换次数使得该串变成一个完美的回文串。
交换的定义是：交换两个相邻的字符
例如mamad
第一次交换 ad : mamda
第二次交换 md : madma
第三次交换 ma : madam(回文！完美！)
输入格式:
第一行是一个整数N，表示接下来的字符串的长度(N <= 8000)
第二行是一个字符串，长度为N.只包含小写字母
输出格式:
如果可能，输出最少的交换次数。
否则输出Impossible
样例输入:
5
mamad
样例输出:
3
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char * s = new char[n];
	cin >> s;
	int i, j, t, l, p;
	j = n - 1;
	int flag = 0;
	int step = 0;
	for (i = 0; i < j; i++)
	{
		t = j;
		while (s[i] != s[t])
			t--;
		char temp;
		if (i == t)
		{
			flag++;
			if (n % 2 == 0 || flag > 1)
			{
				cout << "Impossible" << endl;
				return 0;
			}
			step += n / 2 - i;
			continue;
		}
		if (s[i] == s[t])
		{
			step += j - t;
			temp = s[t];
			for (l = t; l < j; l++)
				s[l] = s[l + 1];
			s[l] = temp;
			j--;
		}
	}
	cout << step << endl;
	return 0;
}