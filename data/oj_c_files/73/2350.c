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
	int a[5][5],i,j;
	int k,m,n,l,p=0,flag=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=4;i++)
	{
		k=a[i][0];m=i;n=0;
		for(j=1;j<=4;j++)//in a row
		{
			if(a[i][j]>k)
			{
				k=a[i][j];
				m=i;n=j;
			}
			
		}
		for(l=0;l<=4;l++)//in the column.
		{
			if(a[l][n]<a[m][n])
			{
				p++;
				break;
			}
		}
		if(p==0)
		{
			printf("%d %d %d\n",m+1,n+1,k);
		    flag++;
		}
		p=0;
	}
	if(flag==0)printf("not found\n");
	return 0;
}


