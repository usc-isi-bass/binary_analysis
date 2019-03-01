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


void count()
{
	int n,i;
	double *p[100],m=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=(double *)malloc(sizeof(double));
		scanf("%lf",p[i]);
		m=m+*p[i];
	}
	m=m/n;
	for(i=0;i<n;i++)
	{
		s=s+(*p[i]-m)*(*p[i]-m);
	}
	s=s/n;
	printf("%.5f\n", sqrt(s));
}

void main()
{
	int i,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	count();
}