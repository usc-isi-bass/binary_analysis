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
	int array[100][100];
	int row,col,i,j,m,n,k,min,sum=0, temp;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		m=col-1;
		for(j=0;j<col;j++)
		{
			if(array[i][j]>array[i][m])
			{
				m=j;
			}
		}
		n=i;
		min=i;
		for(k=0;k<row;k++)
		{
			if(array[k][m]<array[min][m])
			{
				min=k;
			}
		}
		if(n==min)
		{
			printf("%d+%d",n,m);
			break;
		}
		if(n!=min)
		{
			sum+=1;
		}
	}
	if(sum == row)
	{
    		printf("No");
	}
	return 0;
}
