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
	int m,n,i,j,c[100];
	float a[100],b[100],sum=0.000;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		c[i]=n;
	}
	for(i=0;i<m;i++)
	{
		sum=0.000;
		for(j=0;j<c[i];j++)
		{
			if(j==0)
			{
				a[j]=2;
				b[j]=1;
			}
			else
			{
				a[j]=a[j-1]+b[j-1];
				b[j]=a[j-1];
			}
			sum=sum+a[j]/b[j];
		}
		printf("%.3f\n",sum);
	}
	return 0;
}
