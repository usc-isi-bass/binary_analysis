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
	int num,i,j,k=1,a[100000],b;

	scanf("%d",&num);
 
	for(i=1;i<=num;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				if(i==j)
				{
					a[k]=j;
					k++;
				}
			else
			break;
			}
		}
	}

	for (k;k>=1;k--)
	{
		for (b=1;b<=k;b++)
		{
			if (a[k]+a[b]==num)
			{
				printf("%d %d\n",a[b],a[k]);
			}
		}
	}
	return 0;
}