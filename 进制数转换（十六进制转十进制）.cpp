/*
十六进制转十进制
问题描述:
从键盘输入一个不超过8位的正的十六进制数字符串,将它转换为正的十进制数后输出
注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示
样例输入:
FFFF
样例输出:
65535
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int length = s.length();
	long sum = 0;
	for (int i = 0; i < length; i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'F')
			sum = sum * 16 + s[i] - 'A' + 10;
		else
			sum = sum * 16 + s[i] - '0';
	}
	cout << sum << endl;
	return 0;
}