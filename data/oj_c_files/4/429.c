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
	int a[100][100];
	int row,col;
	int i,j;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0,j=0;;)
	{
		printf("%d\n",a[i][j]);
		if(i==row-1&&j==col-1)
			break;
		else
		{
		if(j==0)
		{
			if(i>=col-1)
			{
				i=i-col+2;
				j=col-1;
			}
			else
			{
				j=i+1;
				i=0;
			}
		}
		else if(i==row-1)
		{
			if(i+j>=col-1)
			{
				i=(i+j)-col+2;
				j=col-1;
			}
			else
			{
				j=i+j+1;
				i=0;
			}
		}
		else
		{
			i++;
			j--;
		}
		}


	}
	return 0;
}