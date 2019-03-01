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
	int a[5][5],n,m,b[1][5],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
	       scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);

	if(n<5&&m<5)
	{
		for(i=0;i<5;i++)
		{
			b[0][i]=a[n][i];
		}
		for(i=0;i<5;i++)
		{
			a[n][i]=a[m][i];
		}
		for(i=0;i<5;i++)
		{
			a[m][i]=b[0][i];
		}
	

for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==4)
			{
	       printf("%d\n",a[i][j]);
			}
			else
			{
				printf("%d ",a[i][j]);
			}
		}
	}
	}else
	{
		printf("error");
	}



return 0;
}