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
	double *a;
	double s,t;
	int n,i,j,k,l,m;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		s=0.0;
		a=(double *)malloc(sizeof(double)*(n+1));
		
		for (j=0;j<n;j++)
		{
			scanf("%lf",(a+j));
			s=s+*(a+j);
		}
		s=s/n;
		t=0.0;
		for (j=0;j<n;j++)
		{
			t=t+(*(a+j)-s)*(*(a+j)-s);
		}
		t=sqrt(t/n);
		printf("%.5f\n",t);
		free(a);
	}
}