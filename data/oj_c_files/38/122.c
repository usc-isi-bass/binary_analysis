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
	int k;
	scanf("%d",&k);
	for(;k>0;k--)
	{
		int n;
		double x[100];
		scanf("%d",&n);

		int i;
		double add_sqr=0,a=0;
		for(i=0;i<=n-1;i++)
			scanf("%lf",&x[i]);

		double *p=x;
		for(i=0;i<=n-1;i++)
		{
			add_sqr+=*(p+i)**(p+i);
			a+=*(p+i);
		}

		add_sqr/=n;
		a/=n;

		printf("%.5lf\n",sqrt(add_sqr-a*a));
	}
}