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
	int sz[100][100];
	int a,b,row,col,i;
	scanf("%d %d",&a,&b);
	for(row=0;row<a;row++)
	{
		for(col=0;col<b;col++)
		{
			scanf("%d",&sz[row][col]);
		}
	}
	for(i=0;i<b;i++)
	{
		for(col=i;col>=0&&(i-col)<a;col--)
		{
			printf("%d\n",sz[i-col][col]);
		}
	}
	for(i=b;i<a+b;i++)
	{
		for(col=b-1;col>=0&&(i-col)<a;col--)
		{
			printf("%d\n",sz[i-col][col]);
		}
	}
	return 0;
}