/*
回文数
问题描述
1221是一个非常特殊的数,它从左边读和从右边读是一样的,编程求所有这样的四位十进制数
输出格式
按从小到大的顺序输出满足条件的四位十进制数
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	for (a = 1; a < 10; a++)
		for (b = 0; b < 10; b++)
			for (c = 0; c < 10; c++)
				for (d = 1; d < 10; d++)
					if (a == d && b == c)
						cout << a << b << c << d << endl;
	return 0;
}