#include<stdio.h>
#include<string.h>
#define N 201
int main()
{
	char s1[N];
	char s2[N];
	int a[N] = { 0 };
	int b[N] = { 0 };
	int len_s1;
	int len_s2;
	int c, k, i;//c是用于存储结果数组长度;k用于计算经过加法运算之后每一位是多少;
	puts("Please enter two big numbers:");
	gets_s(s1,100);
	gets_s(s2,100);
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (len_s1 < len_s2)	
		k = len_s2;
	else
		k = len_s1;
	c = k;
	for (i = 0; i < len_s1; i++,k--)
		a[k] = s1[len_s1 - 1 - i] - '0';//数组倒置，并将字符变成数字;
	for (k = c, i = 0; i < len_s2; i++, k--)
		b[k] = s2[len_s2 - 1 - i] - '0';
	
	printf("\n");

	for (i = c; i >= 0; i--)//处理进位
	{
		a[i] += b[i];
		if (a[i] >= 10)
		{
			a[i] -= 10;
			a[i - 1]++;
		}
	}
	printf("The reasult is : \n");
	if (a[0] != 0)
	{
		for (i = 0; i <= c; i++)
			printf("%d", a[i]);
	}
	else
		for (i = 1; i <= c; i++)
			printf("%d", a[i]);
	printf("\n");
	return 0;
}