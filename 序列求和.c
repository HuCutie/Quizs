/*
序列求和
问题描述:
求1+2+3+...+n的值
输入格式:
输入包括一个整数n
输出格式:
输出一行，包括一个整数，表示1+2+3+...+n的值
样例输入:
4
样例输出:
10
样例输入:
100
样例输出:
5050
*/

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n", (1+n)*n/2);
	return 0;
}