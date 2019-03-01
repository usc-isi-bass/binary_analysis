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

int change(int n,int m)
{
	int s=0;
	if (n<=4 && n>=0 && m<=4 && m>=0)
		s=1;
	return s;
}


void main()
{
	int i,j,a[5][5],n,m,temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if (change(n,m)==1)
	{
		for(j=0;j<5;j++)
		{
			temp=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=temp;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if (j!=4)
				printf("%d ",a[i][j]);
				else printf("%d\n",a[i][j]);
			}
		}
	}
	else printf("error\n");
}

	