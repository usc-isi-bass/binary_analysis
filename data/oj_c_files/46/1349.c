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
	int row,col,a[100][100],i,j,sum,m=0;
	scanf("%d%d",&row,&col);
	sum=row*col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=i;j<col-i;j++)
		{
			printf("%d\n",a[i][j]);
			m++;
		}
		if(m==sum)
			break;
		i++;
		j--;
		for(;i<row-(col-j-1);i++)
		{
			printf("%d\n",a[i][j]);
			m++;
		}
		if(m==sum)
			break;
		j--;
		i--;
		for(;j>=row-i-1;j--)
		{
			printf("%d\n",a[i][j]);
			m++;
		}
		if(m==sum)
			break;
		i--;
		j++;
		for(;i>j;i--)
		{
			printf("%d\n",a[i][j]);
			m++;
		}
		if(m==sum)
			break;
	}
}