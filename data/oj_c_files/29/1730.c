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
	int m,n;
	int a[100]={1,2};
	float sum=2.0;
	int i,j;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		sum=2.0;
		scanf("%d",&n);
		if(a[n]==0)
		{
			for(j=2;j<=n;j++)
			{
				a[j]=a[j-1]+a[j-2];
			}
		}
		for(j=1;j<n;j++)
		{
			sum += (double)a[j+1]/a[j];
		}
		printf("%.3lf\n",sum);
	}	return 0;
} 
