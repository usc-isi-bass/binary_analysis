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
	int k,i;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		double x[1000];
		double a=0,b=0,a1=0,b1=0,s=0;
		int n,j;
		scanf("%d",&n);
	    for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			a1+=x[j];
		}
		a=a1/(double)n;
		for(j=0;j<n;j++)
		{
			double m;
			m=(x[j]-a)*(x[j]-a);
			b1+=m;
		}
		b=b1/(double)n;
		s=sqrt(b);
	    printf("%.5lf\n",s);
	}
	return 0;
}