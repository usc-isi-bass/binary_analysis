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
	int i,j,k,row,col;
	int (*p)[100];
	scanf("%d %d",&row,&col);
	p=(int *)calloc(100,10);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",*(p+i)+j);
	printf("%d\n",*(*(p+0)+0));
	j=1;
	i=0;
	for(;j<col;)
	{
		k=j;
		while(j>=0&&i<row)
		{
			printf("%d\n",*(*(p+i)+j));
			j=j-1;
			i=i+1;
		}
		j=k+1;
		i=0;
	}
	i=1;
	j=col-1;
	for(;i<row;)
	{
		k=i;
		while(i<row&&j>=0)
		{
			printf("%d\n",*(*(p+i)+j));
			j=j-1;
			i=i+1;
		}
		i=k+1;
		j=col-1;
	}
	
}
