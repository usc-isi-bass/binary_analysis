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
	int i,j,k,a[8][8],b[8],max,row,col,result=1;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		max=0;
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>a[i][max]) max=j; 
		}
		b[i]=max;
	}
	for(i=0;i<row;i++) 
	{
		for(k=0;k<row;k++)
		{
			if(a[k][b[i]]<a[i][b[i]]) result=0;
		}
		if(result)
		{
			printf("%d+%d",i,b[i]);
			break;
		}
		else
		{
			printf("No");
			break;
		}
	}
}

