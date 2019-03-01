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
	int row,col,i,j,i1,sz[8][8];
         char c;
	scanf("%d%c%d",&row,&c,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		int max = sz[i][0], p = 0;
		for(j=1;j<col;j++)
		{
			if(sz[i][j]>max)
			{
				max = sz[i][j];
				p =j;
			}
		}
		int min=sz[i][p];
		for(i1=0;i1<row;i1++)
		{
			if(min>sz[i1][p])
			{
				break;
			}
		}
		if(i1==row)
		{
			printf("%d+%d",i,p);
			break;
		}
	}
	if(i==row)
	{
		printf("No");
	}
	return 0;
}
