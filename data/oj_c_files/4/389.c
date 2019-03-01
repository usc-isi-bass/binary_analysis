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

void main()
{
	int row,col,array[100][100],i,j,k;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	if((i==1)&&(j==1))
		printf("%d\n",array[0][0]);
	else
	{
		for(j=0;j<col;j++)
		{
			k=j;
			for(i=0;i<row;i++)
			{
				if(k<0)
					break;
				printf("%d\n",array[i][k]);
				k--;
			}
		}
		for(i=1;i<row;i++)
		{
			k=col-1;
			for(j=i;j<row;j++)
			{
				if(k<0)
					break;
				printf("%d\n",array[j][k]);
				k--;
			}
		}
	}
} 