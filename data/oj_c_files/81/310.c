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

void main(void)
{
	int i,j,x,m,n,a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&m,&n);
	if(m>=0 && m<5 && n>=0 && n<5)
	{
		for(j=0;j<5;j++)
		{
			x=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=x;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}printf("%d\n",a[i][4]);
		}
	}
	else
		printf("error\n");
}