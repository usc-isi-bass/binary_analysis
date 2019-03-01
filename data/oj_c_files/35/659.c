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
	int a[8][8],row,col,i=0,j=0,max1=0,min1=0,k,max;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<row;i++)
	{
	    max=a[i][0];
		min1=0;
		max1=0;
		for(j=1;j<col;j++)
		{
			if(a[i][j]>max) 
			{
				max=a[i][j];
				max1=j;
			}
		}
	    for(k=0;k<row;k++)
			if(a[k][max1]<a[i][max1]) min1=1;
		if(min1==0) 
		{
			printf("%d+%d",i,max1);
			break;
		}
	}
	if(min1!=0) printf("No");
	return 0;
}