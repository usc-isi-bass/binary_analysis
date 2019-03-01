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

int main ()
{
	int m,n,i,j;
	int a1,a2;
	double e,x,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		sum=0;
		a1=a2=1;
        for(j=0;j<m;j++)
		{
			e=a1+a2;
			a1=a2;
			a2=e;
			x=1.0*a2/a1;
			sum+=x;
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}