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
	double x;
	int  i,j,m,n,j1,j2;
	scanf("%d",&m);
	double a[100];
	for(i=0;i<m;i++)
	{
		x=0;
		scanf("%d",&n);
		a[0]=1,a[1]=2;
		for(j=2;j<=n;j++)
		{
			a[j]=a[j-2]+a[j-1];
		}
		
		
		for(j=0;j<n;j++)
		{
			x=x+a[j+1]/a[j];
		}
		printf("%.3lf\n",x);
		
	}
	return 0;
}

