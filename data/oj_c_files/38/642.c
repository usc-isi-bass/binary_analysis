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
	int i, n,h,k;
	scanf("%d\n",&k);
	double b,s,c=0,a=0;
	double sz[100];
	for(i=0;i<k;i++)
	{
	scanf("%d\n",&n);
    
		for(h=0;h<n;h++)
		{
		scanf("%lf ",&sz[h]);
		a+=sz[h];
		}
	    b=(double)a/n;
	for(h=0;h<n;h++)
	{
		c+=(sz[h]-b)*(sz[h]-b);
	}
	s=(double) c/n;
	
	printf("%.5lf\n",sqrt(s));
	s=0;a=0;b=0;c=0;
	}
	return 0;
}

