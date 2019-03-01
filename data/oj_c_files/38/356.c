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

int main(int argc, char* argv[])
{
	int k;
	int n;
	double x[100],sum,ping=0,s;
	double a;
	int i,j;
	scanf ("%d",&k);
	for (i=0;i<k;i++)
	{
		sum=0;
		ping=0;
		scanf("%d",&n);
		for (j=0;j<n;j++)
		{
			scanf ("%lf",&x[j]);
		}
		for (j=0;j<n;j++)
		{
			sum=sum+x[j];			
		}
		a=(double)sum/n;
		for (j=0;j<n;j++)
		{
			ping=ping+(x[j]-a)*(x[j]-a);
		}
		s=(double)sqrt(ping/n);
		printf("%.5lf\n",s);
	}
	return 0;
}