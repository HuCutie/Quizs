/*
数列排序
问题描述:
给定一个长度为n的数列，将这个数列按从小到大的顺序排列,1<=n<=200
输入格式:
第一行为一个整数n。
第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000
输出格式:
输出一行，按从小到大的顺序输出排序后的数列
样例输入:
5
8 3 6 4 9
样例输出:
3 4 6 8 9
*/

#include <stdio.h>
#include <stdlib.h>

void Print(int * data, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d  ",data[i]);
	printf("\n");
}

int main()
{
	int n, i, j, temp;
	int * data;
	scanf("%d",&n);
	data = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
		scanf("%d",&data[i]);
	for (i = 0; i < n; i++)
		for (j = 0; j < n-1-i; j++)
		{
			if (data[j+1] < data[j])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	Print(data, n);
	return 0;
}