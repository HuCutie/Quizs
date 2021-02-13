/*
Fibonacci数列 
问题描述:
Fibonacci数列的递推公式为:Fn=Fn-1+Fn-2,其中F1=F2=1
当n比较大时，Fn也非常大,现在我们想知道,Fn除以10007的余数是多少
输入格式
输入包含一个整数n
输出格式
输出一行,包含一个整数，表示Fn除以10007的余数
说明：在本题中，答案是要求Fn除以10007的余数
样例输入:
10
样例输出:
55
样例输入:
22
样例输出:
7704
数据规模与约定
1 <= n <= 1,000,000
*/

#include <stdio.h>

#define MOD 10007

int n, i, F[100];
int main()
{
	scanf("%d", &n);
	F[1] = 1;
	F[2] = 1;
	for (i = 3; i <= n; i++)
		F[i] = (F[i-1] + F[i-2])%MOD;
	printf("%d\n",F[i-1]);
	return 0;
}