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
	int number[100][100];
	int row,col,i,j,a=0,zongshu=0;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&number[i][j]);
		}
	}
	for(a=0;a>=0;a++)
	{
		for(j=a;j<col-a;j++)
		{
			printf("%d\n",number[a][j]);
			zongshu++;
		}
		if(zongshu==row*col)
		{ 
			break;
		}
		for(i=a+1;i<row-a;i++)
		{
			printf("%d\n",number[i][col-a-1]);
			zongshu++;
		} 
		if(zongshu==row*col)
		{ 
			break;
		}
		for(j=col-2-a;j>=a;j--)
		{
			printf("%d\n",number[row-a-1][j]);
			zongshu++;
		}
		if(zongshu==row*col)
		{ 
			break;
		}
        for(i=row-2-a;i>a;i--)
		{
			printf("%d\n",number[i][a]);
			zongshu++;
		}
		if(zongshu==row*col)
		{ 
			break;
		}
	}
	return 0;
}

