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
	int m,n,k=0,l=0;
	double i=2.0,sum=0.0,a[30];
	double deno=1.0,p;
	scanf("%d\n",&m);
   
	for(;m>=1;m--)
	{
		scanf("\n%d",&n);
		for(;n>=1;n--)
		{
			sum=sum+i/deno;
		    p=deno;
			deno=i;
			i=i+p;
		}
        a[k]=sum;
	    sum=0;
		k++;
		i=2.0;
		deno=1.0;
	}
	for(;l<=k-1;l++)
	{
		printf("%.3lf\n",a[l]);
	}
	return 0;
}
    