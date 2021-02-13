#include <stdio.h>
void main()
{
	int x,y;
	int i;
	scanf("%d %d",&x,&y);
	for(i = 1; i <= 60; i++)
	{
		y -= x;
		if(i % 3 == 0)
			x += x;
		if(i % 2 == 0)
			y += y; 
		if(y <= 0)
		{
			y = 0;
			break;
		}
	}
	printf("%d\n",y);
}