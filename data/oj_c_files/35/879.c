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
	int col,row,max=0,k=0,i,a[10][10],c1,r1,i1,l=0,j;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<row;i++)
	{
		max=-1;
		for(j=0;j<col;j++)
			if(a[i][j]>max)
			{
				r1=i;
				c1=j;
				max=a[i][j];
			}
		for(i1=0;i1<row;i1++)
			if(a[r1][c1]>a[i1][c1])
				break;
		if(i1==row)
		{
			l=1;
			printf("%d+%d\n",r1,c1);
		}
	}
	if(l==0)
		printf("No\n");




} 