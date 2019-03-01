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
	int i,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		int n;
		scanf("%d",&n);
		double *p;
		p=(double *)malloc(sizeof(double)*n);
		int j;
		double sum=0.0;
		for(j=0;j<n;j++)
		{
			scanf("%lf",p+j);
			sum+=*(p+j);
		}
		double average;
		average=sum/n;
		double sum2=0.0;
		for(j=0;j<n;j++)
		{
			sum2+=(*(p+j)-average)*(*(p+j)-average);
		}
		double ave=sum2/n;
		double s;
		s=sqrt(ave);
		printf("%.5lf\n",s);
	}
}