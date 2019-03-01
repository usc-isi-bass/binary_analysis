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
	int num[100][100];int line,row,i,j,m,n;
	scanf("%d %d",&row,&line);
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=line-1;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(j=0;j<=line-1;j++)
	{
		m=0;n=j;
	do
	{
		printf("%d\n",num[m][n]);
		m++;n--;
	}
	while (n!=-1&&m<row);
	}
	for(i=1;i<=row-1;i++)
	{
		m=i;n=line-1;
		do
		{
			printf("%d\n",num[m][n]);
			m++;n--;
		}
		while (n!=-1&&m<row);
	}
	return 0;
}
