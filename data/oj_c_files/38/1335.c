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

void main()
{
	int k,i,j,l,n;
	double *p[100];
	double a,sum=0,s=0,b,c,sum2=0,e;
	scanf ("%d",&k);
	for (l=0;l<k;l++)
	{
		a=0;sum=0;s=0;b=0;c=0;sum2=0;e=0;
		scanf("%d",&n);
		for (j=0;j<n;j++)
			*(p+j)=(double * ) malloc (100*sizeof (double));
		for (j=0;j<n;j++)
		{
			scanf("%lf",*(p+j));
			sum=sum+**(p+j);
		}
		a=sum/n;
		for (j=0;j<n;j++)
		{
			b=**(p+j)-a;
			c=b*b;
			sum2=sum2+c;
		}
		e=sum2/n;
		s=sqrt(e);
		printf("%.5f\n",s);
	}
}



