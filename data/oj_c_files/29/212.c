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
	int m,n,i,j;
	double a[100],b[100],c[100],sum;
	a[0]=1;
	a[1]=2;
	b[1]=1;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		sum=0;
		for(j=0;j<n;j++)
		{
			a[j+2]=a[j]+a[j+1];
			b[j+2]=a[j+1];
			sum+=a[j+1]/b[j+1];
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}
	
	