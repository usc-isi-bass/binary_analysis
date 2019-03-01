#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	int a[5][5];
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	int row,col,max;
	for(i=0;i<5;i++)
	{
		max = 0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>=max) 
			{
				max=a[i][j];    row=i;     col=j;
			}
		}
		for(j=0;j<5;j++)
		{
			if(max > a[j][col])   break;
		}
		if(j==5)
		{
			printf("%d %d %d",row+1,col+1,max);
			return 0;
		}
	}
	printf("not found\n");
	return 0;
}
