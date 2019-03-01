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
	int row,col,sum;
	scanf("%d %d",&row,&col);
	int a[100][100];
	int i,j;
	for(i=0;i<row;i++)
	{
		scanf("%d",&a[i][0]);
		for(j=1;j<col;j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
	for(sum=0;sum<(row+col-1);sum++)
	{
		for(i=0;i<=sum;i++)
		{
			if(i<row&&(sum-i)<col)
			{
			printf("%d\n",a[i][sum-i]);
			}
		}
	}
	return 0;
}
