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


double calculate(double a[1000],int n)
{
	int i;
	double m,sum=0,s;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	m=sum/n;
	sum=0;
	for(i=0;i<n;i++)
		sum=(a[i]-m)*(a[i]-m)+sum;
	s=sqrt(sum/n);
	return s;
}

int main()
{
	int k,n,i,j;
	double s;
	double a[1000];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&a[j]);
		}
		s=calculate(a,n);
		printf("%.5lf\n",s);
	}	
	return 0;
}