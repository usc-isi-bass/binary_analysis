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
	int row,col,i,j,k;
	scanf("%d%d",&row,&col);
	int a[100][100];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<col;j++)
	{
		for(i=0;i<j+1;i++)
		{
			if(i<row)
			{
				printf("%d\n",a[i][j-i]);
			}
		
		}
	}
	for(k=col;k<row+col-1;k++)
	{
		for(j=col-1;j>=0;j--)
		{
			if(k-j<row)
			{
				printf("%d\n",a[k-j][j]);
			}
		}
	}
	return 0;

}